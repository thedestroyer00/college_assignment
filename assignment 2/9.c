// To reverse the given number : 

# include <stdio.h>


int main()
{
	int num, rev_num =0;
	
	printf("Enter the number to be reverse:");
	scanf(" %d", &num);
	
	while( num != 0)
	{
		rev_num = rev_num * 10 + num%10;
		num /= 10;
	}	
	printf("%d", rev_num); 
	return 0;
}
