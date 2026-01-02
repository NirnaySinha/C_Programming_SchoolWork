#include <stdio.h>

int main()
{
    float balance;

    printf("Enter initial bank balance: ");
    scanf("%f", &balance);

    balance += 500;     // Interest
    printf("After adding interest: %.2f\n", balance);

    balance -= 200;     // Charges
    printf("After deducting charges: %.2f\n", balance);

    balance *= 1.10;    // Bonus (10% increase)
    printf("After adding bonus: %.2f\n", balance);

    balance /= 2;       // Division operation
    printf("After division: %.2f\n", balance);

    return 0;
}
