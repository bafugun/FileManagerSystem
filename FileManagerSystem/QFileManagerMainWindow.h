#ifndef QFILEMANAGERMAINWINDOW_H
#define QFILEMANAGERMAINWINDOW_H

#include <QWidget>
#include "title_widget.h"
#include "QClassifyByDateWidget.h"
#include "QOperateWidget.h"
#include "QShowResultWidget.h"

class QFileManagerMainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit QFileManagerMainWindow(QWidget *parent = 0);

signals:

public slots:

private:
    void _initUI();

private:
    // 标题显示
    TitleWidget *m_pTitleWidget;

    // 区分显示
    QClassifyByDateWidget *m_pClassifyWidget;

    // 显示结果
    QShowResultWidget *m_pResultWidget;

    // 操作区
    QOperateWidget *m_pOperateWidget;
};

#endif // QFILEMANAGERMAINWINDOW_H
