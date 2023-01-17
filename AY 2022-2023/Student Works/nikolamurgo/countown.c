#include <stdio.h>

//method to count the minutes left
void print(int dCurrentMinutes, int dCurrentHours, int dDeadlineMinutes, int dDeadlineHours){
    int dSumOfCurrent= dCurrentHours *60 + dCurrentMinutes;
    int dSumOfDeadline=dDeadlineHours *60+dDeadlineMinutes;
    
    int dMinsLeft = dSumOfDeadline - dSumOfCurrent;

    printf("You have %d minutes left\n",dMinsLeft);
}
//main
int main(){
    // varibales used
    int dCurrentMinutes;
    int dCurrentHours;
    int dDeadlineMinutes;
    int dDeadlineHours;
    //user input
    printf("Current hour: ");
    scanf("%d",&dCurrentHours);
    printf("Current minute: ");
    scanf("%d",&dCurrentMinutes);
    printf("Deadline hour: ");
    scanf("%d",&dDeadlineHours);
    printf("Deadline minute: ");
    scanf("%d",&dDeadlineMinutes);

    //using the print method 
    print(dCurrentMinutes,dCurrentHours,dDeadlineMinutes,dDeadlineHours);

    return 0;
}//endmain