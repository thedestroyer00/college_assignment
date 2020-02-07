// To convert binary number into decimal:

# include <stdio.h>
# include <math.h>

int main()
{
	int binary, dec, i = 0;
	printf("Enter binary number to be converted : ");
	scanf(" %d", &binary);
	
	while(binary != 0)
	{
		int x = binary % 10 * pow(2,i);
		dec = dec + x;
		binary = binary/10;
		i++;
	}
	printf("%d", dec);
	return 0;
	
}
