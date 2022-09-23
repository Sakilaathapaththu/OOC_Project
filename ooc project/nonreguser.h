#include <iostream>
#include <cstring>

using namespace std;

class nonRegUser {
protected:
    int regid;
    char regname[20];
    char regaddress[50];
    char regemail[30];
    int regno;
public:
    nonRegUser();
    nonRegUser(int rid, char rname[], char raddress[], char remail[], int rno);
    void browsepackages();
    void registersystem();
    ~nonRegUser();

};


