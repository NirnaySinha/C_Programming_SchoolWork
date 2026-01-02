#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter first account balance: ");
    scanf("%f", &a);

    printf("Enter second account balance: ");
    scanf("%f", &b);

    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d", a != b);

    return 0;
}
