#include <stdio.h>
int main()
{
    int ch,n,i;
    do
    {
        printf("1.Print Table\n0.Exit\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            scanf("%d",&n);
            i=1;
            do
            {
                printf("%d x %d = %d\n",n,i,n*i);
                i++;
            }while(i<=10);
        }
    }while(ch!=0);
    return 0;
}
