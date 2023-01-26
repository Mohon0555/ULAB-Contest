#include<stdio.h>
int main()
{
    int i,t,q,n,b=0;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &q,&n);
        b=q*n;
        printf("%d \n", b);
    }
    return 0;
}
