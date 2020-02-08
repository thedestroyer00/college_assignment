// TO display the multiplication table of the given number: 

#include <stdio.h>

int main()

{
	int num, i;
	
	printf("Enter any number: ");
	scanf(" %d", &num);
	
	printf("Multiplication table of %d is given below: \n",num);
	
	for( i = 1; i<= 10; i++)
	{
		printf("%d * %d = %d \n", num, i, num*i);  
	} 
	return 0;
}

