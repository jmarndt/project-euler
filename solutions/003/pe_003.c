#include <stdio.h>

int main(void)
{
    long long prob = 600851475143;
    long long result = prob;

    for (long long i = 2; i < prob; i++)
    {
        if (prob % i == 0)
        {
            long long fact = prob / i;

            for (long long j = 2; j < fact; j++)
            {
                if (fact % j == 0)
                {
                    break;
                }
                
                if (j == fact - 1)
                {
                    result = fact;
                }
            }
        }

        if (result < prob)
        {
            break;
        }
    }

    printf("The largest prime factor is: %lld\n", result);
}