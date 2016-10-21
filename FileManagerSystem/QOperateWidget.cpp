#include <QBoxLayout>
#include <QSplitter>
#include "QOperateWidget.h"


QOperateWidget::QOperateWidget(QWidget *parent) : QWidget(parent)
{
    _initUI();
}

void QOperateWidget::_initUI()
{
    QSplitter *pSplitter = new QSplitter(this);
    pSplitter->setOrientation(Qt::Vertical);

    m_pOperationWidget = new QWidget(pSplitter);

    // 报文整理
    m_pEditDatagram = new QPushButton(QIcon(), QString::fromLocal8Bit("报文整编"));
    // 发送
    m_pSendOperation = new QPushButton(QIcon(), QString::fromLocal8Bit("发送"));
    // 保存
    m_pSaveOperation = new QPushButton(QIcon(), QString::fromLocal8Bit("保存"));
    // 编辑标题
    m_pEditTitle = new QPushButton(QIcon(), QString::fromLocal8Bit("编辑标题"));
    // 删除
    m_pDelOperation = new QPushButton(QIcon(), QString::fromLocal8Bit("删除"));
    // 打印
    m_pPrintOperation = new QPushButton(QIcon(), QString::fromLocal8Bit("打印"));
    // 处理结果
    m_pDealResult = new QPushButton(QIcon(), QString::fromLocal8Bit("处理结果"));

    QHBoxLayout *pButtonLayout = new QHBoxLayout();
    pButtonLayout->setMargin(0);
    pButtonLayout->setContentsMargins(0,0,0,0);
    //pButtonLayout->setSpacing(0);
    pButtonLayout->addWidget(m_pEditDatagram);
    pButtonLayout->addWidget(m_pSendOperation);
    pButtonLayout->addWidget(m_pSaveOperation);
    pButtonLayout->addWidget(m_pEditTitle);
    pButtonLayout->addWidget(m_pDelOperation);
    pButtonLayout->addWidget(m_pPrintOperation);
    pButtonLayout->addWidget(m_pDealResult);

    // 文字编辑区
    m_pTextEdit = new QTextEdit();

    QVBoxLayout *pOperationWidget = new QVBoxLayout(m_pOperationWidget);
    pOperationWidget->setMargin(0);
    pOperationWidget->setContentsMargins(0,0,0,0);
    pOperationWidget->setSpacing(0);
    pOperationWidget->addLayout(pButtonLayout, 0);
    pOperationWidget->addWidget(m_pTextEdit, 10);

    m_pDealStatus = new QLabel(QString::fromLocal8Bit("处理状态:"),pSplitter);
    pSplitter->addWidget(m_pOperationWidget);
    pSplitter->addWidget(m_pDealStatus);
    pSplitter->setStretchFactor(0, 20);
    pSplitter->setStretchFactor(1, 1);
    QHBoxLayout *pMainLayout = new QHBoxLayout();
    pMainLayout->setMargin(0);
    pMainLayout->setContentsMargins(0,0,0,0);
    pMainLayout->addWidget(pSplitter);
    setLayout(pMainLayout);
}
