#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

//用户登录的对话框
class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
    QString getUSER();  //得到用户名
    QString getPWD();   //得到密码

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
