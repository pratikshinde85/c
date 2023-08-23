#include<stdio.h>

#include<conio.h>
int main()
{
    int a=1 ;
    int base,expo,res=1;
printf("Enter the base and power ");
scanf("%d%d",&base,&expo);
while(a<=expo)
{
    res=res*base;
    a++;
}
printf("Power is :%d",res);
return 0;
}