#include "QResultWidget.h"

QResultWidget::QResultWidget(QWidget *parent) : QWidget(parent)
{
    m_pTreeView = new QTreeView(this);
    m_pMainLayout = new QHBoxLayout();
    m_pMainLayout->setMargin(0);
    m_pMainLayout->setContentsMargins(0,0,0,0);
    m_pMainLayout->addWidget(m_pTreeView);
    setLayout(m_pMainLayout);
}
