// To check given number is perfect square or not: 
# include <stdio.h>
# include <math.h>

int main()
{
	int num, sqr;
	double sqrx;
	printf("Enter any number : ");
	scanf(" %d", &num);
	
	sqrx = sqrt(num);
	sqr = sqrx;
	if (sqrx == sqr)
	{
		printf("Given number is a prefect square");
	}
	else
	{
		printf("Given number is not a perfect square");
	}
	return 0;
	
}
