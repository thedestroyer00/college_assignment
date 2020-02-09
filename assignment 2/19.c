// To print the given numbers in ascending order : 

# include <stdio.h>
# define size 20

int main()
{
	int i,j, arr[size];
	
	printf("Enter the element of the array: ");
	for(i = 0; i<size; i++)
	{
		scanf(" %d", &arr[i]);
	}
	
	for(i =0; i<size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
	for(i = 0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;	
}
