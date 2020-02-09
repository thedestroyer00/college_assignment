// To read 20 numbers and find total number of positive numbers, zeros and negative numbers: 

#include <stdio.h>
# define max 20


int main()
{
	int nums[max], p =0, n=0, z=0, i;
	printf("Enter the numbers : ");
	
	for(i =0; i<max; i++)
	{
		scanf(" %d",&nums[i]);
	}
	
	for(i = 0; i< max; i++)
	{
		nums[i] < 0 ? n++ : nums[i] == 0 ? z++ : p++;
	}
	printf(" +ve numbers = %d \n -ve numbers = %d \n zeros = %d ", p,n,z); 
	
	return 0;
}
