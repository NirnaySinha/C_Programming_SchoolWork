#include <stdio.h>
int main()
{
    float balance, interest, charge, bonus;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    printf("Enter interest amount: ");
    scanf("%f", &interest);
    balance += interest;
    printf("After adding interest: %.2f\n", balance);

    printf("Enter maintenance charge: ");
    scanf("%f", &charge);
    balance -= charge;
    printf("After deducting charge: %.2f\n", balance);

    printf("Enter bonus factor: ");
    scanf("%f", &bonus);
    balance *= bonus;
    printf("After bonus: %.2f\n", balance);

    balance /= 2;
    printf("After dividing into two accounts: %.2f", balance);

    return 0;
}
