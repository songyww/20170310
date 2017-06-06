#ifndef SY_1_H
#define SY_1_H


/*****  ArcGIS 的头文件  *****/
#include <ArcSDK.h>


/******       QT 的头文件  *******/
#include <QtGui/QMainWindow>
#include "ui_sy_1.h"
#include <qstring.h>
#include <QtGui/QMessageBox>
#include <QAction>
#include <QMenuBar>
#include <QStatusBar>
#include <QUuid>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <QTextCodec>///解决qt中文乱码时需要添加的头文件

/*****  opencv的头文件  *****/
#include <opencv2/opencv.hpp>
#include <opencv2/legacy/legacy.hpp>
#include <opencv2/nonfree/features2d.hpp>
#include <opencv2/nonfree/nonfree.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <highgui/highgui.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/legacy/compat.hpp>
#include <cv.h>
#include <highgui.h>
#include <cxcore.h>

/***  VC 的头文件 ***/
#include <vector>

/*****  SURF算法头文件 *****/
#include "SURF.h"

using namespace std;
using namespace cv;



//全局变量
vector<IplImage*>img;
QString file_full1,file_name1,m_strFileName1;
QString file_path1 = NULL;
QString file_full2,file_name2,m_strFileName2;
QString file_path2 = NULL;



class sy_1 : public QMainWindow
{
	Q_OBJECT

public:
	sy_1(QWidget *parent = 0, Qt::WFlags flags = 0);
	~sy_1();

private:
	Ui::sy_1Class ui;




public:
	//用于图像配准的三个Map控件变量
	IMapControl3Ptr m_pMapControl1;
	IToolbarControlPtr m_pToolbarControl1;

	IMapControl3Ptr m_pMapControl2;
	IToolbarControlPtr m_pToolbarControl2;

	IMapControl3Ptr m_pMapControl3;
	IToolbarControlPtr m_pToolbarControl3;
	
public:
	//控件工具条设置函数
	void AddMapToolBarCtr(IToolbarControlPtr pToolbar);//map
private:
	QAction *openAction1,*openAction2;
	QAction *SurfAction;

public slots:
	void OpenFile1();
	void OpenFile2();

	int Surf();
	

};

#endif // SY_1_H
