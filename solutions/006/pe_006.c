#include <stdio.h>

int main(void)
{
    int groupSquare = 0;
    int individualSquare = 0;
    int result1 = 0;
    int result2 = 0;

    for (int i = 1; i <= 100; i++)
    {
        groupSquare = groupSquare + i;
    }
    groupSquare = groupSquare * groupSquare;

    for (int j = 1; j <= 100; j++)
    {
        individualSquare = individualSquare + (j*j);
    }

    result1 = groupSquare - individualSquare;

    printf("Problem 6 answer: %d\n", result1);
}