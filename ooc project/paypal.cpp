//Paypal
#include<cstring>
#include"paypal.h"
#include"payment.h"
using namespace std;

Paypal::Paypal(int* pid, char* ptype[], float* pa, char n[], int i):Payment(pid,ptype,pa) {
    strcpy(Name, n);
    Id = i;
    cout << "constructor executed" << endl;
}
bool Paypal::authorized() {
    return false;

}
Paypal::~Paypal() {
    cout << "Paypal delete" << endl;
}

