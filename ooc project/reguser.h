#include <cstring>
#include “database.h”

class RegUser :public nonRegUser {
private:
    DataBase* database;
    char regUsername[20];
    char regPassword[20];
public:
    RegUser();
    RegUser(char rusername[], char rpassword[]);
    void login();
    void logout();
    void updateprofile();
    ~RegUser();
};

