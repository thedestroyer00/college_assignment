// To swap two vairiables without using third variable:

# include <stdio.h>

int main()
{
	int a,b;
	
	printf("Enter any two variable: ");
	scanf(" %d %d", &a,&b);
	
	printf("Befor swap a = %d  b = %d \n", a,b); 
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("After swap a = %d  b = %d",a,b);  

	return 0;
}
