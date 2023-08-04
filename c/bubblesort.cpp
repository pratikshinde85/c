
#include <stdio.h>

void main()
 {
 int n, i, j, temp;
 printf("\nEnter the size of array :");
 scanf("%d",&n);
int a[n];
printf("Enter the numbers in array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("[");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("]\n");
printf("Ascending order: ");
for(i=0;i<n-1;i++)
{
for(j=0;j=n-1-i;j++)
{
if (a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
printf("Sorted array is");
for(i=0;i<n;i++)
{
printf("%d",a[j]);
}
}
}