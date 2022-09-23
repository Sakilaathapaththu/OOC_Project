#include <cstring>
#include “trainer.h”
#include “administrator.h”

Administrator::Administrator(int aid, char ana[], char aemail[]) {
    adminid = aid;
    strcpy(adminname, ana);
    strcpy(adminemail, aemail);

}
void Administrator::updatePackages() {

}
void Administrator::updateschedules() {

}
void Administrator::validatedetails() {

}
Administrator::~Administrator() {
    cout << "administrator delete" << endl;

}

