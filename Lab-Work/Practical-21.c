#include <stdio.h>

int main()
{
    int i;
    float dist, total = 0;

    for (i = 1; i <= 30; i++)
    {
        printf("Enter distance for day %d (km): ", i);
        scanf("%f", &dist);
        total += dist;
    }

    printf("Total distance walked in 30 days = %.2f km", total);

    return 0;
}
