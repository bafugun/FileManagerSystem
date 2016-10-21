#include <QSplitter>
#include <QBoxLayout>
#include "QFileManagerMainWindow.h"

QFileManagerMainWindow::QFileManagerMainWindow(QWidget *parent) : QWidget(parent)
{
    _initUI();
}

void QFileManagerMainWindow::_initUI()
{
    QSplitter *pSplitter = new QSplitter(this);
    pSplitter->setOrientation(Qt::Horizontal);

    // 标题显示
    m_pTitleWidget = new TitleWidget();

    // 区分显示
    m_pClassifyWidget = new QClassifyByDateWidget(pSplitter);

    QWidget *pWidget = new QWidget(pSplitter);
    // 显示结果
    m_pResultWidget = new QShowResultWidget(this);
    // 操作区
    m_pOperateWidget = new QOperateWidget();

    QVBoxLayout *pRightLayout = new QVBoxLayout(pWidget);
    pRightLayout->setMargin(0);
    pRightLayout->setContentsMargins(0,0,0,0);
    pRightLayout->addWidget(m_pResultWidget, 12);
    pRightLayout->addWidget(m_pOperateWidget, 4);

    pSplitter->addWidget(m_pClassifyWidget);
    pSplitter->setStretchFactor(0,2);
    pSplitter->addWidget(pWidget);
    pSplitter->setStretchFactor(1,20);

    QVBoxLayout *pMainLayout = new QVBoxLayout();
    pMainLayout->setMargin(0);
    pMainLayout->setContentsMargins(0,0,0,0);
    pMainLayout->addWidget(m_pTitleWidget);
    pMainLayout->addWidget(pSplitter);

    setLayout(pMainLayout);
    resize(1024,648);
}
