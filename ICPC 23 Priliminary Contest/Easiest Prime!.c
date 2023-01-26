#include<stdio.h>
int main()
{
    int i,j,t,n,c,d=0;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(j=1; j<=n; j++)
        {
            if(n%j==0)
            {
                d++;
            }
        }
        if(d==3)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }
        d=0;
    }
    return 0;
}
