#include<cstring>
#include"creditcard.h"
#include"payment.h"
using namespace std;
CreditCard::CreditCard(int* pid, char* ptype[], float* pa, char cnumber[], char cc[], char edate[]):Payment(pid,ptype,pa) {
    strcpy(CardNumber, cnumber);
    strcpy(Ccord, cc);
    strcpy(exdate, edate);
    cout << "constructor executed" << endl;

}
bool CreditCard::authorized() {
    return false;
}
CreditCard::~CreditCard() {
    cout << "Creditcard delete" << endl;

  