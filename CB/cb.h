#ifndef CB_H
#define CB_H

#include <QDialog>
#include<Qtwidgets>

class CB : public QDialog
{
    Q_OBJECT

public:
    CB(QWidget *parent = 0);
    ~CB();

private:
    QTextEdit* displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
    QPushButton* TcolorPushBtn;

private slots:
    void doPushBtn();
};
#endif // CB_H
