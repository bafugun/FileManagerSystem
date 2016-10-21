#include <QtGui>
#include "QClassifyByDateWidget.h"
#include "main_widget.h"
#include "title_widget.h"
#include "QShowResultWidget.h"
#include "QShowStaticWidget.h"
#include "QFileManagerMainWindow.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
    qDebug()<<QTextCodec::codecForLocale()->name();
    //QTextCodec *pCode = QTextCodec::
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());

    QTranslator translator;
    translator.load(QString(":/qm/qt_zh_CN"));
    app.installTranslator(&translator);

    QTranslator translator_zh;
    translator_zh.load(QString(":/qm/360safe_zh.qm"));
    app.installTranslator(&translator_zh);

    QFont font("微软雅黑", 9);
    app.setFont(font);

//    MainWidget main_widget;
//    main_widget.showWidget();

//    TitleWidget title;
//    title.show();

//    QClassifyByDateWidget classifyWidget;
//    classifyWidget.show();

    //QShowResultWidget widget;
    //widget.show();

//    QShowStaticWidget staticWidget;
//    staticWidget.show();

    QFileManagerMainWindow mainWindow;
    mainWindow.showMaximized();
    return app.exec();
}
