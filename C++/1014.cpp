#include<stdio.h>
int main()
{
    int w,h,n,i,j,k,l;
    scanf("%d%d%d",&w,&h,&n);
    int tab[3000][10]={0},arr[n][2];
    int zero=0,one=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<h;j++)
        {
            for(l=0;l<arr[i][1];l++)
            {
                tab[arr[i][0]+l][j]++;
            }
        }
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            if(tab[j][i]==0)
            {
                zero++;
            }
            if(tab[j][i]==1)
            {
                one++;
            }
        }
    }
    printf("%d %d",zero,one);
    scanf(" ");
}
