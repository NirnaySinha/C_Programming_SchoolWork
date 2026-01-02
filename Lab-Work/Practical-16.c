#include <stdio.h>

int main()
{
    int color;

    printf("Enter color (1=Red, 2=Yellow, 3=Green): ");
    scanf("%d", &color);

    switch (color)
    {
        case 1: printf("Stop"); break;
        case 2: printf("Ready"); break;
        case 3: printf("Go"); break;
        default: printf("Invalid Input");
    }

    return 0;
}
