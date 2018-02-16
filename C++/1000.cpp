#include<stdio.h>
int main();
{
    int a,b,d,i,j,;
    scanf("%d %d",&a,&b);
    char arr[b][a+1],st[a+1],ls[a+1];
    for(i=0;i<b;i++)
    {
                    scanf("%s",&arr[i]);
    }
    for(i=1;i<b;i++)
    {
                    d=2;
                    for(j=0;j<=a;j++)
                    {
                                     ls[j]=arr[i][j];
                                     st[j]=arr[i-1][j];
                    }
                    for(j=0;j<=a;j++)
                    {
                                     if(ls[j]!=st[j])
                                     {
                                                     d=d-1;
                                     }
                    }
                    if(d<0)
                    {
                             printf("%s",st);
                             break;
                    }
                    if(i==b-1)
                    {
                             printf("%s",ls);
                    }
    }
    scanf(" ");
}
