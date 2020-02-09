// To check the given number is palindrome or not :

# include <stdio.h>

int main()
{
	int num, x, rev_num=0;
	
	printf("Enter the number: ");
	scanf(" %d", &num);
	
	x = num;
	while(num !=0)
	{
		rev_num = rev_num * 10 + num % 10;
		num /= 10;
	}
	
	(x == rev_num) ? printf("The given number is palindrome"): printf("The given number is not palindrome");
	
	return 0;
}
