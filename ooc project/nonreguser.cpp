#include <cstring>
#include “nonreguser.h”

nonRegUser::nonRegUser() {
    regid = 0;
    strcpy(regname,"");
    strcpy(regaddress,"");
    strcpy(regemail,"");
    regno=0;
}
nonRegUser::nonRegUser(int rid, char rname[], char raddress[], char remail[], int rno)
{
    regid = rid;
    strcpy(regname,rname);
    strcpy(regaddress,raddress );
    strcpy(regemail,remail);
    regno = rno;

}
void nonRegUser::browsepackages() {

}
void nonRegUser::registersystem() {

}
nonRegUser::~nonRegUser() {
    cout << "non register user deleted" << endl;
}

