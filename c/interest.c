#include<stdio.h>
#include<conio.h>
int main()
{
 float principle_amt,rate_of_interest,time;
 float interest;
 printf("Enter the Principle amt: ");
 scanf("%f",& principle_amt);
 printf("Enter the rate of interest: ");
 scanf("%f",&rate_of_interest );
 printf("Enter the time in year: ");
 scanf("%f",&time );
 interest=  principle_amt*rate_of_interest*time/100;
 printf("total interest:%f", interest);
 
 

return 0;
}