// To print the sum of factors of given number (excluding 1 and itself):

# include <stdio.h>

int main()
{
	int num,i,sum =0;
	printf("Enter any number :");
	scanf(" %d", &num);
	
	for(i = 2; i< num; i++)
	{
		if(num %i == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
