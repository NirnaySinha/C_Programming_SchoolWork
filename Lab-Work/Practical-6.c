#include <stdio.h>

int main()
{
    char name[50];
    float basic, hra, da, gross, net;

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = basic * 0.10;
    da = basic * 0.05;

    gross = basic + hra + da;
    net = gross;

    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);
    printf("Net Salary: %.2f", net);

    return 0;
}
