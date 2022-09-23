#include <cstring>
#include “reguser.h”

RegUser::RegUser() {
    strcpy(regUsername, "");
    strcpy(regPassword, "");

}
RegUser::RegUser(char rusername[],char rpassword[]) {
    strcpy(regUsername, rusername);
    strcpy(regPassword, rpassword);
}
void RegUser::login() {

}
void RegUser::logout() {

}
void RegUser::updateprofile() {

}
RegUser::~RegUser() {
    cout << "register user delete" << endl;
}

