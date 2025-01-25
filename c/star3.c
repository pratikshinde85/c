#include<stdio.h>
int main()
{
    int i,j;
for(i=0;i<=5;i++)
{
    for(j=0;j<=5;j++)
    {
        if(i==0|i==5|j==0|j==5|i==j|j==5-i+1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        
    }
    printf("\n");
}
    return 0;
}