#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QDialog>
#include <QString>
#include <string>

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QDialog
{
    Q_OBJECT

public:
    LoginScreen();
    ~LoginScreen();

private:
};

#endif // LOGINSCREEN_H
