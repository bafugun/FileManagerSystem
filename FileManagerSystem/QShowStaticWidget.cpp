#include <QHBoxLayout>
#include "QShowStaticWidget.h"

QShowStaticWidget::QShowStaticWidget(QWidget *parent) : QWidget(parent)
{
    // 已处理信息
    m_pDealedItem = new QLabel(QString::fromLocal8Bit("<u>15</u>条"));
    // 未处理信息
    m_pNonDealItem = new QLabel(QString::fromLocal8Bit("<u>5</u>条"));
    // 总共
    m_pAllItem = new  QLabel(QString::fromLocal8Bit("<u>20</u>条"));

    QHBoxLayout *hlayout = new QHBoxLayout();\
    hlayout->setMargin(20);
    hlayout->setContentsMargins(0,0,0,0);
    hlayout->addWidget(m_pDealedItem);
    hlayout->addWidget(m_pNonDealItem);
    hlayout->addWidget(m_pAllItem);
    setFixedWidth(120);
    setLayout(hlayout);
}
