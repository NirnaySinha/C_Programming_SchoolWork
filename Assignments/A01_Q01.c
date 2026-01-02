#include <stdio.h>
int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 25.75;

    printf("int value: %d, size: %zu bytes\n", a, sizeof(a));
    printf("float value: %.2f, size: %zu bytes\n", b, sizeof(b));
    printf("char value: %c, size: %zu bytes\n", c, sizeof(c));
    printf("double value: %.2lf, size: %zu bytes\n", d, sizeof(d));

    return 0;
}
