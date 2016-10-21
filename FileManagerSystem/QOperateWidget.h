#ifndef QOPERATEWIDGET_H
#define QOPERATEWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>

class QOperateWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QOperateWidget(QWidget *parent = 0);

signals:

public slots:

protected:
    void _initUI();
private:

    // 操作widget
    QWidget *m_pOperationWidget;

    // 文字编辑区
    QTextEdit *m_pTextEdit;
    // 报文整理
    QPushButton *m_pEditDatagram;
    // 发送
    QPushButton *m_pSendOperation;
    // 保存
    QPushButton *m_pSaveOperation;
    // 编辑标题
    QPushButton *m_pEditTitle;
    // 删除
    QPushButton *m_pDelOperation;
    // 打印
    QPushButton *m_pPrintOperation;
    // 处理结果
    QPushButton *m_pDealResult;

    // 处理状态
    QLabel *m_pDealStatus;
};

#endif // QOPERATEWIDGET_H
