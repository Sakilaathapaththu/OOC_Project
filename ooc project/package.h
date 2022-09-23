//package
#include<iostream>
using namespace std;
#include "database.h"
#include "payment.h"

class Package {
private:
    DataBase* database;
    Payment* pay[1];
    int packid;
    char packtype[20];
    float packprice;
public:
    Package(int paid,char patype[],float paprice);
    void generateid();
    ~Package();

};
