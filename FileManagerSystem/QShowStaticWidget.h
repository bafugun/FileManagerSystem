#ifndef QSHOWSTATICWIDGET_H
#define QSHOWSTATICWIDGET_H

#include <QWidget>
#include <QLabel>

class QShowStaticWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QShowStaticWidget(QWidget *parent = 0);

signals:

public slots:

private:
    // 已处理信息
    QLabel *m_pDealedItem;
    // 未处理信息
    QLabel *m_pNonDealItem;
    // 总共
    QLabel *m_pAllItem;
};

#endif // QSHOWSTATICWIDGET_H
