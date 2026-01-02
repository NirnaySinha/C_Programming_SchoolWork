#include <stdio.h>
int main()
{
    int x = 5, y;

    y = ++x;
    printf("After pre-increment: x = %d, y = %d\n", x, y);

    x = 5;
    y = x++;
    printf("After post-increment: x = %d, y = %d\n", x, y);

    return 0;
}
