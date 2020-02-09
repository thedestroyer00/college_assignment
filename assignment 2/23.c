// To read salary of 100 employees and print number of employees whose salary is in between 10000 and 20000

#include <stdio.h>
# define max 100

int main()
{
	int salary[max], i,employees =0;
	printf("Enter the salary of the employess:");
	for(i = 0; i< max; i++)
	{
		scanf(" %d", &salary[i]);
	}
	
	for(i = 0; i<max; i++)
	{
		if(salary[i] >= 10000 && salary[i] <= 20000)
		{
			employees++;
		}
	}
	printf("%d employess has salary in between 10000 and 20000",employees);
	
	
	return 0;
}
