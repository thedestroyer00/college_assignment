// To find the sum of odd numbers from 1-100:

#include <stdio.h>

int main()
{
	int i, odd=0;
	
	for(i = 1; i<=100; i++)
	{
		if(i%2 != 0)
		{
			odd += i;
		}
	}
	printf(" sum odd = %d", odd);
	
	return 0;
}
