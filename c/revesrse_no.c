#include<stdio.h>
int main()
{  
	int no;
	int rem;
	int reverse;
	printf("Enter the number which you want to reverse:");
	scanf("%d",&no);
	while(no!=0)          
	{ 
		rem=no%10;
		reverse=rem+reverse *10;
		no/=10;
		
	}
printf("reverse number is:%d",reverse);
	return 0;
}