#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    float r;
   printf("Enter the two no: ");
   scanf("%f%f",&a,&b);
   r=a+b;
   printf("\nAddition of two no:%f",r);
   r=a-b;
   printf("\nSubtraction of two no:%f",r);
   r=a*b;
   printf("\nMultiplication of two no:%f",r);
   r=a/b;
   printf("\nDivision of two no:%f",r);
   getch();
    return 0;
}