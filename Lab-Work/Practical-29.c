#include <stdio.h>
void grade()
{
    int marks[5], i, total = 0;
    float avg;
    printf("Enter marks for 5 subjects: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    avg = total / 5.0;
    printf("Total: %d\nAverage: %.2f\nGrade: ", total, avg);
    if(avg >= 90)
        printf("A");
    else if(avg >= 80)
        printf("B");
    else if(avg >= 70)
        printf("C");
    else if(avg >= 60)
        printf("D");
    else
        printf("F");
}
int main()
{
    grade();
    return 0;
}
