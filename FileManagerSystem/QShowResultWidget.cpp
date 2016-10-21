#include "QShowStaticWidget.h"
#include "QResultWidget.h"
#include "QShowResultWidget.h"


QShowResultWidget::QShowResultWidget(QWidget *parent) : QWidget(parent)
{
    m_pUI = new Ui::ShowTreeWidget();
    m_pUI->setupUi(this);
    _iniUI();
}

void QShowResultWidget::_iniUI()
{
//    // 全部
//    m_pAllResult = new QResultWidget(this);
//    QVBoxLayout *pAllLayout = new QVBoxLayout(this);
//    pAllLayout->addWidget(m_pAllResult);

//    // 信息
//    m_pInfoResult = new QResultWidget(this);
//    // 综合
//    m_pSynthesizeResult = new QResultWidget(this);
//    // 动向
//    m_pTrendResult = new QResultWidget(this);
//    // 其他
//    m_pOtherResult = new QResultWidget(this);

//    addTab(m_pAllResult, QString::fromLocal8Bit("全部"));
//    addTab(m_pInfoResult, QString::fromLocal8Bit("信息"));
//    addTab(m_pSynthesizeResult, QString::fromLocal8Bit("综合"));
//    addTab(m_pTrendResult, QString::fromLocal8Bit("动向"));
//    addTab(m_pOtherResult, QString::fromLocal8Bit("其他"));

    m_pStaticWidget = new QShowStaticWidget(this);
    m_pStaticWidget->move(this->width()- m_pStaticWidget->width(), 0);
    //setCurrentIndex(0);
//    setLayout(pAllLayout);
}

void QShowResultWidget::resizeEvent(QResizeEvent *)
{
    m_pStaticWidget->move(this->width()- m_pStaticWidget->width(), 0);
}
