#include <stdio.h>

int main(void)
{
    int workingPrime = 7;
    int result = 0;
    int tmp = 0;

    for (int j = 4; j <= 10001; j++)
    {
        int tmp = (workingPrime) / 2 + 1;
        for (int i = 2; i <= tmp; i++)
        {
            if (workingPrime % i == 0)
            {
                workingPrime = workingPrime + 2;
                i = 2;
                tmp = (workingPrime) / 2 + 1;
            }
        }
        result = workingPrime;
        workingPrime = workingPrime + 2;
    }

    printf("Problem 7 answer is: %d\n", result);
}
