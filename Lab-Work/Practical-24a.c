#include <stdio.h>
int main()
{
    int ch,n,i;
    while(1)
    {
        printf("1.Print Table\n0.Exit\n");
        scanf("%d",&ch);
        if(ch==0)
            break;
        if(ch==1)
        {
            scanf("%d",&n);
            i=1;
            while(i<=10)
            {
                printf("%d x %d = %d\n",n,i,n*i);
                i++;
            }
        }
    }
    return 0;
}
