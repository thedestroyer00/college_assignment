// To convert decimal number into binary:

#include <stdio.h>

int main()
{
	int dec, binary[100],i = 0;
	printf("Enter the decimal number : ");
	scanf(" %d", &dec);
	
	while(dec != 0)
	{
		binary[i] = dec%2;
		dec = dec/2;
		i++;	
	}
	for( i = i-1; i>= 0; i--)
	{
		printf("%d", binary[i]);
	}
	return 0;
}
