#include <stdio.h>

int main(void)
{
    int count = 20;

    while (1)
    {
        if (count % 11 == 0 && count % 12 == 0 && count % 13 == 0 && count % 14 == 0 && count % 15 == 0 && 
            count % 16 == 0 && count % 17 == 0 && count % 18 == 0 && count % 19 == 0 && count % 20 == 0)
            {
                printf("The number we are looking for is: %d\n", count);
                return 0;
            }
        count += 20;
    }

    return 0;
}