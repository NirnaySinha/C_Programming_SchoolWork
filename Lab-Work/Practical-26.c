#include <stdio.h>
int factorial(int n)
{
    int f = 1, i;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial: %d", factorial(n));
    return 0;
}
