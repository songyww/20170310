#ifndef SY_1_H
#define SY_1_H


/*****  ArcGIS ��ͷ�ļ�  *****/
#include <ArcSDK.h>


/******       QT ��ͷ�ļ�  *******/
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
#include <QTextCodec>///���qt��������ʱ��Ҫ��ӵ�ͷ�ļ�

/*****  opencv��ͷ�ļ�  *****/
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

/***  VC ��ͷ�ļ� ***/
#include <vector>

/*****  SURF�㷨ͷ�ļ� *****/
#include "SURF.h"

using namespace std;
using namespace cv;



//ȫ�ֱ���
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
	//����ͼ����׼������Map�ؼ�����
	IMapControl3Ptr m_pMapControl1;
	IToolbarControlPtr m_pToolbarControl1;

	IMapControl3Ptr m_pMapControl2;
	IToolbarControlPtr m_pToolbarControl2;

	IMapControl3Ptr m_pMapControl3;
	IToolbarControlPtr m_pToolbarControl3;
	
public:
	//�ؼ����������ú���
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
