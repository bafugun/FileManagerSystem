#ifndef QRESULTWIDGET_H
#define QRESULTWIDGET_H

#include <QTreeView>
#include <QWidget>
#include <QHBoxLayout>

class QResultWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QResultWidget(QWidget *parent = 0);

signals:

public slots:

private:
    QTreeView *m_pTreeView;
    QHBoxLayout *m_pMainLayout;
};

#endif // QRESULTWIDGET_H
