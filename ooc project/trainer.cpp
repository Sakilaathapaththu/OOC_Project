#include <cstring>
#include “trainer.h”
#include “administrator.h”
#include “package.h
#include “reguser.h”
#include “shedule.h

Trainer::Trainer() {
    trainerid = 0;
    strcpy(trainername, "");
    strcpy(traineruserna, "");
    strcpy(trainerpassword, "");

}
Trainer::Trainer(int tid, char tna[], char tuna[], char tpass[]) {
    trainerid = tid;
    strcpy(trainername,tna);
    strcpy(traineruserna,tuna);
    strcpy(trainerpassword,tpass);

}
void Trainer::login(RegUser* regu[]) {

}
void Trainer::logout() {

}
void Trainer::addpackagedetails(Package* pack[]) {

}
void Trainer::addscheduledetails() {

}
Trainer::~Trainer() {
    cout << "Trainer delete" << endl;
    for (int i = 0; i < 1; i++) {
        delete admin[i];
        delete pack[i];
        delete regu[i];
        delete schedu[i];
    }

}

