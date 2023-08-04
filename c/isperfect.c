#include <stdio.h>
#include<string.h>
#define MAX

int biggest_on_delete(int input1)
{
	int k = 1;
	for (int j = 0; j < k; j++) 
     {

		int ans = 0;
		int i = 1;

		
		while (input1 / i > 0) 
        {

		
			int temp = (input1 / (i * 10))* i + (input1 % i);
						
					
			i *= 10;

			
			ans = MAX(ans, temp);
		}
      	input1 = ans;
        
	  }
   
    print("max:%d",input1);
	return 0;
}
int main()
{
	int input1;
	
        printf("enter the number:");
        scanf("%d", &input1);
       
	    biggest_on_delete(input1);
	return 0;
}
