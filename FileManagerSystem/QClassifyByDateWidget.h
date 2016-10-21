#ifndef QCLASSIFYBYDATEWIDGET_H
#define QCLASSIFYBYDATEWIDGET_H

#include <QToolBox>
#include <QToolButton>
#include <QGroupBox>

class QClassifyByDateWidget : public QToolBox
{
    Q_OBJECT
public:
    explicit QClassifyByDateWidget(QWidget *parent = 0);

signals:

public slots:

private:
    // 今天信息
    //QToolButton *m_pTodayAll;
    // 今天已处理信息
    QToolButton *m_pTodayDealed;
    // 今天未处理信息
    QToolButton *m_pTodayNonDeal;

    // 昨天信息
    // QToolButton *m_pYesterdayAll;
    // 昨天已处理信息
    QToolButton *m_pYesterdayDealed;
    // 昨天未处理信息
    QToolButton *m_pYesterdayNonDeal;

    // 前天信息
    //QToolButton *m_pDayBeforeYesterdayAll;
    // 前天已处理信息
    QToolButton *m_pDayBeforeYesterdayDealed;
    // 前天未处理信息
    QToolButton *m_pDayBeforeYesterdayNonDeal;

    // 本周信息
    //QToolButton *m_pThisWeekAll;
    // 本周已处理信息
    QToolButton *m_pThisWeekDealed;
    // 本周未处理信息
    QToolButton *m_pThisWeekNonDeal;

    QGroupBox *m_pTodayBox;
    QGroupBox *m_pYesterdayBox;
    QGroupBox *m_pDayBeforeYesterdayBox;
    QGroupBox *m_pThisWeekAllBox;
};

#endif // QCLASSIFYBYDATEWIDGET_H
