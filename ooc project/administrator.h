#include <cstring>
#include “trainer.h”
class Administrator {
private:
    Trainer* trainer;
    int adminid;
    char adminname[20];
    char adminemail[30];

public:
    Administrator(int aid, char ana[], char aemail[]);
    void updatePackages();
    void updateschedules();
    void validatedetails();
    ~Administrator();
};


