// To check if the given number is special or not
// (A number is special if it is equal to it's factor excluding itself):

# include <stdio.h>

int main()
{
	int num,i,sum =0;
	printf("Enter any number :");
	scanf(" %d", &num);
	
	for(i = 1; i< num; i++)
	{
		if(num %i == 0)
		{
			sum += i;
		}
	}
	( sum == num) ? printf("It is a special number.") : printf("It isn't a special number");
	
	return 0;
}
