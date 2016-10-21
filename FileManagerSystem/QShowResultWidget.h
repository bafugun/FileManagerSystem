#ifndef QSHOWRESULTWIDGET_H
#define QSHOWRESULTWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QTabWidget>
class QResultWidget;
class QShowStaticWidget;
#include "ui_showResultWidget.h"

class QShowResultWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QShowResultWidget(QWidget *parent = 0);

signals:

public slots:

protected:
    void resizeEvent(QResizeEvent *);

private:
    void _iniUI();
private:
//    // 全部
//    QResultWidget *m_pAllResult;
//    // 信息
//    QResultWidget *m_pInfoResult;
//    // 综合
//    QResultWidget *m_pSynthesizeResult;
//    // 动向
//    QResultWidget *m_pTrendResult;
//    // 其他
//    QResultWidget *m_pOtherResult;
    Ui::ShowTreeWidget *m_pUI;
    // 综合统计信息
    QShowStaticWidget *m_pStaticWidget;
};

#endif // QSHOWRESULTWIDGET_H
