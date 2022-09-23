#include<cstring>
#include "database.h"
#include "payment.h"
#include"package.h"
using namespace std;
Package::Package(int paid, char patype[], float paprice) {
    packid = paid;
    strcpy(packtype, patype);
    packprice = paprice;

}
void Package::generateid() {

}
Package::~Package() {
    cout << "package delete" << endl;
    for (int i = 0; i < 1; i++) {
        delete pay[i];
    }
}


