// To find second largest or smallest number among 10 given numbers:

# include <stdio.h>
# include <stdlib.h>
# define max 10

int main()
{
	int arr[max], g,s,i,j, w1 = 1, w2 =1;
	
	printf("Enter the numbers : ");
	for(i = 0; i<max; i++)
	{
		scanf(" %d", &arr[i]);
	}
	
	for(i = 0; i<max; i++)
	{
		for(j = i+1;j <max; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i]= arr[j];
				arr[j] = temp;
			}
		}
	}
	g = arr[max-1];
	s = arr[0];
	i = 1;
	while(w1 == 1)
	{
		if(s == arr[i])
		{i++;}
		else
		{
			s = arr[i];
			break;
		}
		 
	}
	printf("%d is second smallest number.\n", s);
	j = max-1;
	while(1)
	{
		if(g == arr[j])
		{j--;}
		else
		{
			g = arr[j]; 
			break;
		}
	}
	printf("%d is second greatest number.",g );
	
	return 0;
}
