// To check the given number is perfect cube or not : 

# include <stdio.h>
# include <math.h>

int main()
{
	int num, cub;
	double cube;
	printf("Enter any number : ");
	scanf(" %d", &num);
	
	cube = cbrt(num);
	cub = cube;
	printf("%d %lf ", cub, cube);
	if (cub == cube)
	{
		printf("Given number is a prefect cube ");
	}
	else
	{
		printf("Given number is not a perfect cube");
	}
	return 0;
	
}
