#include <stdio.h>
int main()
{
    int a[100], n, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }
    if(found)
        printf("Number found at position %d", i+1);
    else
        printf("Number not found");
    return 0;
}
