#include <stdio.h>

int palindrome(int n)
{
    int pos1 = (n % 1000000) / 100000;
    int pos2 = (n % 100000) / 10000;
    int pos3 = (n % 10000) / 1000;
    int pos4 = (n % 1000) / 100;
    int pos5 = (n % 100) / 10;
    int pos6 = n % 10;

    if (pos1 == pos6 && pos2 == pos5 && pos3 == pos4)
    {
        return 0;
    }
    
    return 1;
}

int main(void)
{
    int result = 0;
    int prod = 0;

    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            prod = i * j;
            if (palindrome(prod) == 0 && prod > result)
            {
                result = prod;
            }
        }
    }

    printf("The largest palindrome is: %d\n", result);
}