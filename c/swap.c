#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,temp;
  a=10;
  b=20;
  printf("before swaping no are:\n%d\n%d",a,b);
  temp=a;
  a=b;
  b=temp;  
  printf("\nAfter swaping no are:%d\n%d",a,b);
 return 0;
}