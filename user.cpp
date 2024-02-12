#include "user.h"

User::User() {

    identifiant = nullptr;
    password = nullptr;
    listProfils = new QVector<Profil>;
}
