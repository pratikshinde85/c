#include<stdio.h>
int main()
{   int i,j,no;
    printf("Enter the size of square:");
    scanf("%d",&no);

	for(i=1;i<=no;i++)
		{
			for(j=1;j<=no;j++)
			{   if(i==1||j==1||j==no-i+1||i==j||j==no||i==no)
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