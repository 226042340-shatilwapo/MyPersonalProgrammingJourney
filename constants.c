#include <stdio.h>
int main () {
    const int DAYS_IN_WEEK=7;
    int hour=24;
    int HOURS_IN_A_WEEK;
    HOURS_IN_A_WEEK= DAYS_IN_WEEK*hour;
    printf("Hours in one week: %d", HOURS_IN_A_WEEK);
    return 0;

}
