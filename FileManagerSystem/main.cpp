#include <QtGui>
#include "QClassifyByDateWidget.h"
#include "main_widget.h"
#include "title_widget.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

	QTranslator translator;  
	translator.load(QString(":/qm/qt_zh_CN"));  
	app.installTranslator(&translator);  

	QTranslator translator_zh;  
	translator_zh.load(QString(":/qm/360safe_zh.qm"));  
	app.installTranslator(&translator_zh);  

	QFont font("΢���ź�", 9);
	app.setFont(font);

//    MainWidget main_widget;
//    main_widget.showWidget();

//    TitleWidget title;
//    title.show();

    QClassifyByDateWidget classifyWidget;
    classifyWidget.show();

    return app.exec();
}
