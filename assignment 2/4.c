// To check given number is prime or not : 

# include <stdio.h>
# include <math.h>

int main()
{
	int num, sqr,i,isprime = 0;
	
	printf("Enter the number to be checked: ");
	scanf(" %d", &num);
	
	sqr = sqrt(num);
	
	for(i = 2; i<=sqr; i++)
	{
		if(num %i == 0)
		{
			isprime = 1;
		}
	}
	if(isprime == 0)
	{
		printf("The given number is a  prime number");
	}
	else
	{
		printf("The given number is not a prime number");
	}
	return 0;
}
