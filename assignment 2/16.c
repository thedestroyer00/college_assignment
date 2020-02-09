// To find second largest or smallest number among 10 given numbers:

# include <stdio.h>
# define size 10

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
	printf("The second largest number is : %d\n", arr[size - 2]);
	printf("The smallest number is : %d \n", arr[1]);
	
	return 0;	
}
