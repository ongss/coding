#include<stdio.h>
int main()
{
    int a,b=0,c,i,j,k,arr[100];
    for(i=0;;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==-1) break;
        b++;
    }
    int Q=1,S=0,W=1;
    int w,work[b],all[b];
    for(i=0;i<b;i++)
    {
        Q=1;
        S=0;
        W=1;
        for(j=0;j<arr[i];j++)
        {
            w=W;
            W=w+Q+S;
            S=w;
        }
        work[i]=W;
        all[i]=W+Q+S;
    }
    for(i=0;i<b;i++)
    {
        printf("%d %d\n",work[i],all[i]);
    }
    scanf(" ");
}
