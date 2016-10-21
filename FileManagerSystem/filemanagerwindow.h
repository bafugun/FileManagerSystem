#ifndef FILEMANAGERWINDOW_H
#define FILEMANAGERWINDOW_H

#include <QWidget>

class FileManagerWindow : public QWidget
{
    Q_OBJECT

public:
    FileManagerWindow(QWidget *parent = 0);
    ~FileManagerWindow();
};

#endif // FILEMANAGERWINDOW_H
