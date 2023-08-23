#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=1,j;
    //printf("hello wprld");
    for(i=1;i<=3;i++)
    { 
        for(j=1;j<=i;j++)
        {
             printf("%d",sum);
             sum +=1;
        }
        
      printf("\n");
     // sum=sum+1;
    }
    
       return 0; 
}