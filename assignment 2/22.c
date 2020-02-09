
// To find the sum of even numbers from 1-100:

#include <stdio.h>

int main()
{
	int i, even=0;
	
	for(i = 1; i<=100; i++)
	{
		if(i%2 == 0)
		{
			even += i;
		}
	}
	printf(" sum even = %d", even);
	
	return 0;
}
