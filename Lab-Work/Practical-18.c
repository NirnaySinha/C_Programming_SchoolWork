#include <stdio.h>

int main()
{
    float p1, p2, p3, p4, p5, total;

    printf("Enter price of item 1: ");
    scanf("%f", &p1);

    printf("Enter price of item 2: ");
    scanf("%f", &p2);

    printf("Enter price of item 3: ");
    scanf("%f", &p3);

    printf("Enter price of item 4: ");
    scanf("%f", &p4);

    printf("Enter price of item 5: ");
    scanf("%f", &p5);

    total = p1 + p2 + p3 + p4 + p5;

    printf("Total Bill = %.2f", total);

    return 0;
}
