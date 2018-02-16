#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int tab[1000][1000]={0};
    for(i=2;i<n+2;i++)
    {
        for(j=2;j<n+2;j++)
        {
            scanf("%d",&tab[i][j]);
        }
    }
    int a,b=0,c,d;
    for(i=2;i<n+2;i++)
    {
        for(j=2;j<n+2;j++)
        {
            if(tab[i][j]==0) break;
            a=tab[i][j];
            if(tab[i+1][j]==a&&tab[i+1][j+1]==a&&tab[i-1][j]!=a&&tab[i][j-1]!=a&&tab[i+1][j-1])
            {
                tab[i][j]=0;
                tab[i+1][j]=0;
                tab[i+1][j+1]=0;
                b++;
                break;
            }
            if(tab[i+1][j]==a&&tab[i+1][j-1]==a)
            {
                tab[i][j]=0;
                tab[i+1][j]=0;
                tab[i+1][j+1]=0;
                b++;
                break;
            }
        }
    }
    //print
    for(i=2;i<n+2;i++)
    {
        for(j=2;j<n+2;j++)
        {
            printf("%d",tab[i][j]);
        }
        printf("\n");
    }
    scanf(" ");
}
