#include<stdio.h>
int main()
{   int i,j,no;
    printf("Enter the size of square:");
    scanf("%d",&no);

	for(i=0;i<=no-1;i++)
		{
			for(j=1;j<=no;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	return 0;
}