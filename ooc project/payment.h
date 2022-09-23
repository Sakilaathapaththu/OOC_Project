#include<iostream>
using namespace std;
class Payment {
protected:
    int Payid;
    char Paytype[15];
    float Payamount;
public:
    Payment();
    Payment(int* pid, char* ptype[], float* pa);
    bool checkpayment();
    void confirmpayment();
    ~Payment();
};

