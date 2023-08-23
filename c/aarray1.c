#include<stdio.h>
#include<conio.h>
int main()
{
  int a[5],i,j,sum=0,count;
  int b[5];
  printf("Enter the size of Array:");
  scanf("%d",&count);
  printf("Array element :\n");
  for(i=0;i<count;i++)
  {
      scanf("%d",&a[i]);
  }  
  printf("All array element:");
  for(i=0;i<count;i++)
  {
      printf("\n%d",a[i]);
  }
  printf("Element of b Array':");
for(i=0;i<count;i++)
{
    b[i]=a[i];
    printf("\n%d",b[i]);
}

return 0;
}