#include "buflacload.h"
using namespace RackoonIO;
#include "events/ShellEvents.h"
#include <QVBoxLayout>
#include <QPixmap>

BuFlacLoad::BuFlacLoad(QWidget *parent) :
    QWidget(parent)
{
	QVBoxLayout *layout = new QVBoxLayout();
	QVBoxLayout *mainLayout = new QVBoxLayout(this);
	bottomLayout = new QHBoxLayout();

	setMaximumSize(300,75);

	labelFilename = new QLabel(this);
	labelFilename->setText(tr("Unloaded"));
	labelFilename->setAlignment(Qt::AlignCenter);

	led = new QLabel(this);

	led->setText("Loading...");
	layout->addWidget(labelFilename);
	layout->addLayout(bottomLayout);
	bottomLayout->addWidget(led);

	frame = new QFrame(this);
	frame->setFrameStyle(QFrame::Panel|QFrame::Sunken);
	frame->setLayout(layout);
	frame->setStyleSheet("background-color: #0b1c26;");
	frame->setAutoFillBackground(true);
	frame->setMinimumHeight(75);


	mainLayout->addWidget(frame);
	setLayout(mainLayout);

	setAcceptDrops(true);
	setAutoFillBackground(true);

}

void BuFlacLoad::linkUnit(RackUnit *unit) {
	if(unit->getRuType() != "RuFlacLoad")
		return;
	eventLoop->addEventListener(FlacLoadInit, std::bind(&BuFlacLoad::unitOnInit, this, std::placeholders::_1));
	ruUnit = static_cast<RuFlacLoad*>(unit);
	QLabel *labelName = new QLabel(QString::fromStdString(ruUnit->getName()));
	bottomLayout->addWidget(labelName);
	bottomLayout->setAlignment(labelName, Qt::AlignRight);
}

void BuFlacLoad::unitOnInit(std::shared_ptr<RackoonIO::EventMessage> msg) {
	std::string name = ruUnit->getFilename();

	labelFilename->setText(QString::fromStdString(ruUnit->getFilename()));
	led->setText("Ready");
}

void BuFlacLoad::setEventLoop(RackoonIO::EventLoop *loop) {
	eventLoop = loop;
}

void BuFlacLoad::dragEnterEvent(QDragEnterEvent *e) {
    e->acceptProposedAction();
    emit changed(e->mimeData());
}

void BuFlacLoad::dragMoveEvent(QDragMoveEvent *e) {
    e->acceptProposedAction();
}

void BuFlacLoad::dropEvent(QDropEvent *e) {
	e->acceptProposedAction();

	if(ruUnit->isStreaming()) {
		return;
	}

	const QMimeData *mimeData = e->mimeData();
	if (mimeData->hasText()) {
		led->setText("Loading...");
	} else {
		led->setText(tr("Cannot display data"));
	}
	std::string fname = mimeData->text().toStdString();

	ruUnit->setFilename(fname.substr(7, fname.length()));
	ruUnit->init();

}

void BuFlacLoad::dragLeaveEvent(QDragLeaveEvent *e) {
    e->accept();
}


