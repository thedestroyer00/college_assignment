// To find the smallest and the largest number among the given numbers : 

# include <stdio.h>

int main()
{
	int size, i, temp_large, temp_small;
	
	printf("Enter the size of the arrray : ");
	scanf(" %d", &size);
	
	int arr[size];
	
	printf("Enter the element of the array: ");
	for(i = 0; i<size; i++)
	{
		scanf(" %d", &arr[i]);
	}
	
	temp_large = arr[0];
	temp_small = arr[0];
	
	for(i =1; i<size; i++)
	{
		if(temp_large < arr[i])
		{
				temp_large = arr[i];
		}
		
		if(temp_small > arr[i])
		{
			temp_small = arr[i];
		}
	}
	printf("The largest number is : %d\n", temp_large);
	printf("The smallest number is : %d \n", temp_small);
	
	return 0;	
}
