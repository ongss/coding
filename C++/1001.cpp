#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d %d",&a,&b);
    char box[50][50];
    int tab[50][50],arr[b];
    for(i=0;i<a;i++)
    {
              scanf("%s",&box[i]);
    }
    for(i=0;i<b;i++)
    {
                    scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
                    for(j=0;j<b;j++)
                    {
                                    if(box[i][j]=='.')
                                    {
                                                      tab[i][j]=0;
                                    }
                                    if(box[i][j]=='O')
                                    {
                                                      tab[i][j]=1;
                                    }
                    }
    }
    for(i=0;i<b;i++)
    {
                    for(j=0;j<arr[i];j++)
                    {
                                       for(k=0;k<a;k++)
                                       {
                                                          if(tab[k][i]==1||tab[k][i]==2)
                                                          {
                                                                                        tab[k-1][i]=2;
                                                                                        break;
                                                          }
                                                          if(k==a-1)
                                                          {
                                                                    tab[k][i]=2;
                                                          }
                                       }
                    }
    }
    for(i=0;i<a;i++)
    {
                    for(j=0;j<b;j++)
                    {
                                    if(tab[i][j]==0) printf(".");
                                    else if (tab[i][j]==1) printf("O");
                                    else if (tab[i][j]==2) printf("#");
                    }
                    printf("\n");
    }
    scanf(" ");
}
