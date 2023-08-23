#include<stdio.h>
#include<conio.h>
int main()
{   int count;
    int a[10],even[10],odd[10];
    int i,j,k;
printf("Enter the size of array:");
scanf("%d",&count);
printf("\nEnter the Element in Array");
  for(i=0;i<count;i++)
  {
      scanf("%d",&a[i]);
  }
for(i=0;i<count;i++)
{
    if(a[i]%2==0)
    {
       even[j]=a[i];
    }
    else
    {
        odd[k]=a[i];
    }
}
 printf("\nEven number in array:");
        for(j=0;j<count;j++)
    {
        printf("\t%d",even[j]);
    }
 printf("\nOdd number in array:");
        for(k=0;k<count;k++)
     {
        printf("\t%d",odd[k]);
     }
  return 0;
}