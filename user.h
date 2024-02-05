#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;


class User
{
private:
    string identifiant;
    string password;

public:
    User();

    User(string Id, string password);
};

#endif // USER_H
