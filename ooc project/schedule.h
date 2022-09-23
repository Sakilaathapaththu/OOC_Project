//Schedule
//it21328916
schedule.h
#include <cstring>
#include “database.h”

class Schedule {
private:
    DataBase* database;
public:
    Schedule();
    void updatetimeslots();
    ~Schedule();
};
