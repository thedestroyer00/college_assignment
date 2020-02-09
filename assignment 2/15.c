// To print the prime number from 1 to 500:

#include <stdio.h>
#include <math.h>

int main()
{
    int sqr,i,j,isprime,prime[100], size = 1;
    prime[0] = 2;
    
    for(i = 2; i<=500;i++)
    {
        sqr = sqrt(i);
        for(j = 2; j<=sqr; j++)
        {
            if(i%j == 0)
            {
                isprime = 1;
            }
        }
        if(isprime == 0)
        {
            prime[size] = i;
            size++;
        }
        else
        {
            isprime = 0;
        }
    }
    
    for(i =0; i<size; i++)
    {
        printf("%d ", prime[i]);
    }
    

    return 0;
}
