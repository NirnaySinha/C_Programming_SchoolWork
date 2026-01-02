#include <stdio.h>

int main()
{
    int i, units, total = 0;

    for (i = 1; i <= 7; i++)
    {
        printf("Enter usage for day %d: ", i);
        scanf("%d", &units);
        total += units;
    }

    printf("Total weekly consumption = %d units", total);

    return 0;
}
