#include "newuser.h"
#include "ui_newuser.h"
#include "user.h"
using namespace std;

newUser::newUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::newUser)
{
    ui->setupUi(this);
}

newUser::~newUser()
{
    delete ui;
}


void newUser::on_pushButton_clicked(){
    QString newPassword = ui->passwordTextField->text();
    QString newId = ui->idTextField->text();

    if(newPassword.isEmpty() || newId.isEmpty()){
        ui->labelError->setText("Erreur, veuillez remplir tous les champs");
    }
    else{
        User newUser = User(newId.toStdString(), newPassword.toStdString());


    }
}


