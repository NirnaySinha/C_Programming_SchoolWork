#include <stdio.h>

int main()
{
    int i, status, present = 0;

    for (i = 1; i <= 30; i++)
    {
        printf("Day %d (1=Present, 0=Absent): ", i);
        scanf("%d", &status);

        if (status == 1)
            present++;
    }

    printf("Total present days = %d", present);

    return 0;
}
