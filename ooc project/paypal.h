//Paypal
#include<iostream>
#include"payment.h"
using namespace std;
class Paypal :public Payment {
private:
    char Name[20];
    int Id;
public:
    Paypal(int* pid, char* ptype[], float* pa, char n[], int i);
    bool authorized();
    ~Paypal();

};
