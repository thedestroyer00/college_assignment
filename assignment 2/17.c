// To print the given 20 numbers in  reverse order :
# include <stdio.h>
# define size 20

int main()
{
	int i, arr[size];
	
	printf("Enter the element of the array: ");
	for(i = size -1; i>=0; i--)
	{
		scanf(" %d", &arr[i]);
	}

	for(i = 0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;	
}

