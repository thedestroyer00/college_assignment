// To convert decimal number to octal number : 

# include <stdio.h>

int main()
{
	int dec, oct[100], i =0 ;
	
	printf("Enter any decimal number : ");
	scanf(" %d", &dec);
	
	while(dec != 0)
	{
		oct[i] = dec % 8;
		dec/= 8;
		i++;	
	}
	
	for(i = i-1; i>=0; i--)
	{
		printf("%d", oct[i]);
		
	}
	
	return 0;
}
