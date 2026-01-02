#include <stdio.h>
void factorial(int n, int *result)
{
    int i;
    *result = 1;
    for(i = 1; i <= n; i++)
        *result *= i;
}
int main()
{
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n, &f);
    printf("Factorial: %d", f);
    return 0;
}
