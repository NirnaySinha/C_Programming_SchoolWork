#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number (1-Monday, 2-Tuesday, 3-Wednesday, 4-Thursday, 5-Friday, 6-Saturday): ");
    scanf("%d", &day);
    switch(day)
    {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        default: printf("Invalid input");
    }
    return 0;
}
