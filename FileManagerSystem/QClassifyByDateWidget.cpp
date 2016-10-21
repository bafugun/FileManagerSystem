#include <QVBoxLayout>
#include <QTextCodec>
#include "QClassifyByDateWidget.h"

QClassifyByDateWidget::QClassifyByDateWidget(QWidget *parent) : QToolBox(parent)
{
    // 今天已处理信息
    m_pTodayDealed = new QToolButton();
    m_pTodayDealed->setText(QString::fromLocal8Bit("已处理(0)"));
    m_pTodayDealed->setAutoRaise(true);

    // 今天未处理信息
    m_pTodayNonDeal = new QToolButton();
    m_pTodayNonDeal->setText(QString::fromLocal8Bit("未处理(0)"));
    m_pTodayNonDeal->setAutoRaise(true);

    m_pTodayBox = new QGroupBox();
    QVBoxLayout *layToday = new QVBoxLayout(m_pTodayBox);
    layToday->setMargin(0);
    layToday->setAlignment(Qt::AlignHCenter);
    //layToday->addWidget(m_pTodayAll);
    layToday->addWidget(m_pTodayDealed);
    layToday->addWidget(m_pTodayNonDeal);
    layToday->addSpacerItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    //layToday->addStretch();

    // 昨天信息
    //m_pYesterdayAll =new QToolButton();
    //m_pYesterdayAll->setText(tr("昨天信息(0)"));
    //m_pYesterdayAll->setAutoRaise(true);

    // 昨天已处理信息
    m_pYesterdayDealed = new QToolButton();
    m_pYesterdayDealed->setText(QString::fromLocal8Bit("已处理(0)"));
    m_pYesterdayDealed->setAutoRaise(true);

    // 昨天未处理信息
    m_pYesterdayNonDeal = new QToolButton();
    m_pYesterdayNonDeal->setText(QString::fromLocal8Bit("未处理(0)"));
    m_pYesterdayNonDeal->setAutoRaise(true);

    m_pYesterdayBox = new QGroupBox();
    QVBoxLayout *layYesterday = new QVBoxLayout(m_pYesterdayBox);
    layYesterday->setMargin(0);
    layYesterday->setAlignment(Qt::AlignHCenter);
    //layYesterday->addWidget(m_pYesterdayAll);
    layYesterday->addWidget(m_pYesterdayDealed);
    layYesterday->addWidget(m_pYesterdayNonDeal);
    layYesterday->addSpacerItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    //layYesterday->addStretch();

    // 前天信息
    //m_pDayBeforeYesterdayAll =new QToolButton();
    //m_pDayBeforeYesterdayAll->setText(tr("前天信息(0)"));
    //m_pDayBeforeYesterdayAll->setAutoRaise(true);

    // 前天已处理信息
    m_pDayBeforeYesterdayDealed = new QToolButton();
    m_pDayBeforeYesterdayDealed->setText(QString::fromLocal8Bit("已处理(0)"));
    m_pDayBeforeYesterdayDealed->setAutoRaise(true);

    // 前天未处理信息
    m_pDayBeforeYesterdayNonDeal = new QToolButton();
    m_pDayBeforeYesterdayNonDeal->setText(QString::fromLocal8Bit("未处理(0)"));
    m_pDayBeforeYesterdayNonDeal->setAutoRaise(true);

    m_pDayBeforeYesterdayBox = new QGroupBox();
    QVBoxLayout *layDayBeforeYesterday = new QVBoxLayout(m_pDayBeforeYesterdayBox);
    layDayBeforeYesterday->setMargin(0);
    layDayBeforeYesterday->setAlignment(Qt::AlignHCenter);
    //layDayBeforeYesterday->addWidget(m_pDayBeforeYesterdayAll);
    layDayBeforeYesterday->addWidget(m_pDayBeforeYesterdayDealed);
    layDayBeforeYesterday->addWidget(m_pDayBeforeYesterdayNonDeal);
    layDayBeforeYesterday->addSpacerItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    //layDayBeforeYesterday->addStretch();


    // 本周信息
    //m_pThisWeekAll =new QToolButton();
    //m_pThisWeekAll->setText(tr("本周信息(0)"));
    //m_pThisWeekAll->setAutoRaise(true);

    // 本周已处理信息
    m_pThisWeekDealed = new QToolButton();
    m_pThisWeekDealed->setText(QString::fromLocal8Bit("已处理(0)"));
    m_pThisWeekDealed->setAutoRaise(true);

    // 本周未处理信息
    m_pThisWeekNonDeal = new QToolButton();
    m_pThisWeekNonDeal->setText(QString::fromLocal8Bit("未处理(0)"));
    m_pThisWeekNonDeal->setAutoRaise(true);

    m_pThisWeekAllBox = new QGroupBox();
    QVBoxLayout *layThisWeek = new QVBoxLayout(m_pThisWeekAllBox);
    layThisWeek->setMargin(0);
    layThisWeek->setAlignment(Qt::AlignHCenter);
    //layThisWeek->addWidget(m_pThisWeekAll);
    layThisWeek->addWidget(m_pThisWeekDealed);
    layThisWeek->addWidget(m_pThisWeekNonDeal);
    layThisWeek->addSpacerItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));

    addItem(( QWidget* )m_pTodayBox , QString::fromLocal8Bit("今日信息(0)" ));
    addItem(( QWidget* )m_pYesterdayBox , QString::fromLocal8Bit("昨天信息(0)" ));
    addItem(( QWidget* )m_pDayBeforeYesterdayBox , QString::fromLocal8Bit("前天信息(0)"));
    addItem(( QWidget* )m_pThisWeekAllBox , QString::fromLocal8Bit("本周信息(0)" ));
}
