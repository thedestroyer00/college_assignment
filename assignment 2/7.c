// To find the factorial of a given number : 

// without using recursion :

# include <stdio.h>

int main()
{
	int num, fact = 1, i =0;
	
	printf("Enter any number : ");
	scanf("%d", &num);
	
	while(i < num)
	{
		fact = fact * (num -i);
		i++;
	}
	printf("%d! = %d",num, fact);
	return 0;  
}


// using recursion : 
/*

# include <stdio.h>

int fact(int number);
int main()
{
	int f, num;
	printf("Enter the number: ");
	scanf(" %d", &num);
	f = fact(num);
	printf("%d! = %d",num,f);
	return 0;
}

int fact(int number)
{
	if(number == 1)
	{ return 1;}
	else
	{ return number * fact(number -1);}
	
}
*/
