//credit card
#include<iostream>
using namespace std;
#include"payment.h"
class CreditCard :public Payment {
private:
    char CardNumber[17];
    char Ccord[10];
    char exdate[10];
public:
    
    CreditCard(int* pid, char* ptype[], float* pa, char cnumber[], char cc[],char edate[]);
    bool authorized();
    ~CreditCard();
};
