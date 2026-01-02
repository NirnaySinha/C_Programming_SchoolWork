#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Value with pre-increment (++x) = %d\n", ++x);
    printf("Value with post-increment (x++) = %d\n", x++);
    printf("Final value of x = %d", x);

    return 0;
}
