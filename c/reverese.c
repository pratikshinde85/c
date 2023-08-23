#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    int r,revarse;
    int sum=0;
    printf("enter the five digit no:");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;    
        revarse=revarse*10+r ;
        sum=sum+r;
        num=num/10;

    }
    printf("Revarse number of entered number is : %d\n",revarse);
    printf("Sum of digit : %d\n",sum);
    if(num==revarse)
    {
        printf("it is a palindrome ");
    }
    else
    {
        printf("it is not a palindrome");
    }

    return 0;
}