// To print the factors of the given numbers : 

# include <stdio.h>

int main()
{
	int num,i;
	printf("Enter any number :");
	scanf(" %d", &num);
	
	for(i = 1; i<= num; i++)
	{
		if(num %i == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
