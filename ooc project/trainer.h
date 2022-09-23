#include <cstring>
#include “administrator.h”
#include “package.h
#include “reguser.h”
#include “shedule.h

class Trainer {
    Administrator* admin[1];
    Package* pack[1];
    RegUser* regu[1];
    Schedule* schedu[1];
    int trainerid;
    char trainername[20];
    char traineruserna[20];
    char trainerpassword[10];

public:
    Trainer();
    Trainer(int tid,char tna[],char tuna[],char tpass[]);
    void login(RegUser* regu[]);
    void logout();
    void addpackagedetails(Package* pack[]);
    void addscheduledetails();
    ~Trainer();

};
