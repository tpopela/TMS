// TMOGUIAdjust.h: interface for the TMOGUIAdjust class.
//
//////////////////////////////////////////////////////////////////////
#include <q3frame.h>
#include "TMOGUIAdjustValues.h"

class TMOImage;
class TMOGUIHisto;
class TMOGUIProgressBar;
class TMOGUIToneSlider;
class QLineEdit;
class QPushButton;
class QString;

class TMOGUIAdjust : public Q3Frame
{
	Q_OBJECT
public:
	virtual int SetImage(TMOImage* pImage);
	virtual int reset();
	TMOGUIAdjust(QWidget* parent, const char * name);
	virtual ~TMOGUIAdjust();
	int Create(TMOImage* pSrc, TMOGUIAdjustValues* pVals);
	TMOGUIToneSlider* pToneSlider;
	TMOGUIAdjustValues* pValues;
	TMOGUIHisto* pHisto;
	bool bLog;
protected:
	QString FormatVal(double val);
	QLineEdit* pBlack;
	QLineEdit* pWhite;
	QLineEdit* pGamma;
	QPushButton* pRed;
	QPushButton* pGreen;
	QPushButton* pBlue;
	QPushButton* pLum;
	QPushButton* pLinear;
	QPushButton* pLog;
	int iMode;
	bool bUpdate;
public slots:
	void scalechanged(int);
	void valueschanged();
	void setr();
	void setg();
	void setb();
	void setl();
	void setlog();
	void setlinear();
	void updateall();
	void setwhite(const QString&);
	void setblack(const QString&);
	void setgamma(const QString&);
};
