#include "test.h"

#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include <QCursor>
#include <QKeySequence>
#include <QPushButton>
#include <QDebug>
//
//#include <QUuid>
//#include <qmessagebox.h>
//#include <qstring.h>
//#include <qfiledialog.h>

test::test(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);


	setWindowTitle(tr("Main Window"));
	openAction = new QAction(QIcon(":\images\doc-open"),tr("&Yes"),this);
	closeAction =  new QAction(QIcon(":\images\doc-close"),tr("NO"), this);
	//openAction->setShortcut(QKeySequence::Open);
	//openAction->setStatusTip(tr("Open an existing file"));
	connect(openAction, SIGNAL(triggered()),this,SLOT(open()));
	//file_menu = new QMenu("ÎÄ¼þ")£»
	connect(closeAction,SIGNAL(triggered()),this,SLOT(close()));
	statusBar();

	QMenu *file = menuBar()->addMenu(tr("&File"));
	file->addAction(openAction);
	file->addAction(closeAction);
	file->addMenu("111")->addAction(openAction);
	QToolBar *toolBar2 = addToolBar(tr("&File"));
	toolBar2->addAction(openAction);

	/*QMenu *menu1 = new QMenu("hello");
	menu1->addAction("hello l111");
	menu1->addAction("world 1111");

	if (QAction * act = menu1->exec(QCursor::pos( )))
	{
	qDebug()<<act->text()<<"triggered";
	}*/


}

test::~test()
{

}


void test::open()
{
	QMessageBox::information(this, tr("Information"),tr("Open"));
}
void test::close()
{
	QMessageBox::information(this,tr("Hello"),tr("Close"));
}
