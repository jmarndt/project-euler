#include <stdio.h>

int main(void)
{
    int curr = 2;
    int prev = 1;
    int temp = 0;
    int sum = 0;

    while (curr < 4000000)
    {
        if (curr % 2 == 0)
        {
            sum += curr;
        }

        temp = prev + curr;
        prev = curr;
        curr = temp;
    }

    printf("%i\n", sum);

    return 0;
}