#include <stdio.h>

int main(void)
{
    int result = 0;

    for (int a = 2; a < 995; a++)
    {
        for (int b = a+1; b < 995; b++)
        {
            for (int c = b+1; c < 995; c++)
            {
                if (a*a + b*b == c*c && a+b+c == 1000)
                {
                    result = a * b * c;
                    goto end;
                }
            }
        }
    }

    end:
    printf("Problem 9 answer is: %d\n", result);
}