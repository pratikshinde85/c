#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],b[5];
    int i,j;
    printf("Enter the array  Element :""\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Element in a :");
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nArray element in b:""\n");
    
    for(i=0,j=4;i<5,j>=0;i++,j--)
    {
        b[i]=a[j];
       
      printf("\n%d",b[i]);
    }
   
    return 0;
}