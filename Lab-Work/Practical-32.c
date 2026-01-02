#include <stdio.h>
void calculate(int *a, int *b, int *sum, int *diff, int *prod, float *div)
{
    *sum = *a + *b;
    *diff = *a - *b;
    *prod = (*a) * (*b);
    *div = (*b != 0) ? (float)(*a)/(*b) : 0;
}
int main()
{
    int x, y, sum, diff, prod;
    float div;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    calculate(&x, &y, &sum, &diff, &prod, &div);
    printf("Sum: %d\nDifference: %d\nProduct: %d\nDivision: %.2f", sum, diff, prod, div);
    return 0;
}
