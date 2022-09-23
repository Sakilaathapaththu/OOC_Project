#include"payment.h"
#include<cstring>
using namespace std;
Payment::Payment() {
    Payid = 0;
    strcpy(Paytype, "");
    Payamount = 0;
}
Payment::Payment(int* pid, char* ptype[], float* pa) {
    Payid = *pid;
    strcpy(Paytype,*ptype);
    Payamount = *pa;

}
bool Payment::checkpayment() {
    return false;
}
void Payment::confirmpayment() {

}
Payment::~Payment() {
    cout << "Payment delete" << endl;
}
