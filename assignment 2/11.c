// To convert octal to decimal 
#include <stdio.h>
#include <math.h>

int main()
{
    int dec =0,oct, i =0;
    
    printf("Enter the octal number : ");
    scanf(" %d", &oct);
    
    while (oct != 0)
    {
        dec += oct % 10 * pow(8,i);
        oct /= 10;
        i++;
    }
    printf("%d", dec);

    return 0;
}
