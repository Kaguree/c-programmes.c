// program to calculate the simple interest
#include <stdio.h>
int main () {
    int principal_amount;
    int rate;
    int time;
    int simple_interest;
    
    printf("Enter the principal_amount:");
    scanf("%d" ,& principal_amount);
    printf("The principal_amount is %d\n", principal_amount);
    
    printf("Enter the rate :");
    scanf("%d", & rate);
    printf("The rate is %d\n", rate);
    
    printf("Enter the time :");
    scanf("%d", & time);
    printf("The time is %d\n", time);
    
    simple_interest=(principal_amount*rate*time)/100;
    printf("The simple interest is %d",simple_interest);
     
     return 0 ;
}
