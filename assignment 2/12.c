// To find the sum of odd and even number in range 1-100:

#include <stdio.h>

int main()
{
	int i, odd=0, even=0;
	
	for(i = 1; i<=100; i++)
	{
		(i % 2 == 0) ? (even += i) : (odd += i); 
	}
	printf(" sum odd = %d \n sum even = %d", odd, even);
	
	return 0;
}


