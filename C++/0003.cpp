#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j;
    scanf("%d %d",&a,&b);
    int tab[a][b];
    int tabb[a][b];
    int ans[a][b];
    for(i=0;i<a;i++)
    {
                    for(j=0;j<b;j++)
                    {
                                    scanf("%d",&tab[i][j]);
                    }
    }
    for(i=0;i<a;i++)
    {
                    for(j=0;j<b;j++)
                    {
                                    scanf("%d",&tabb[i][j]);
                                    ans[i][j]=tab[i][j]+tabb[i][j];
                    }
    }
    for(i=0;i<a;i++)
    {
                    for(j=0;j<b;j++)
                    {
                                    printf("%d ",ans[i][j]);
                    }
                    printf("\n");
    }
    scanf("%d",e);
}
