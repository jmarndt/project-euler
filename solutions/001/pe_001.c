#include <stdio.h>

int main(void)
{
    int answer = 0;

    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            answer += i;
        }
    }

    printf("%i\n", answer);

    return 0;
}
