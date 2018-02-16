#include<stdio.h>
int main()
{
    int a,b=0,c=0,d,e,i,j,k,sum=0,zi=0;
    scanf("%d",&a);
    int tab[a][a];
    int list[a*a]={0};
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&tab[i][j]);
            if(tab[i][j]>a*a||tab[i][j]<1)
            {
                b=1;
                break;
            }
            for(k=0;k<c;k++)
            {
                if(list[k]==tab[i][j])
                {
                    b=1;
                    break;
                }
            }
            list[c]=tab[i][j];
            c++;
        }
    }
    if(b==1)    printf("No");
    else
    {
        for(i=0;i<a;i++)
        {
            sum+=tab[0][i];
        }
        for(i=0;i<a;i++)
        {
            zi=0;
            for(j=0;j<a;j++)
            {
                zi+=tab[i][j];
            }
            if(zi!=sum)
            {
                b=1;
                break;
            }
        }
        for(i=0;i<a;i++)
        {
            zi=0;
            for(j=0;j<a;j++)
            {
                zi+=tab[j][i];
            }
            if(zi!=sum)
            {
                b=1;
                break;
            }
        }
        zi=0;
        for(i=0;i<a;i++)
        {
            zi+=tab[i][i];
        }
        if(zi!=sum)
        {
            b=1;
        }
        zi=0;
        for(i=0;i<a;i++)
        {
            zi+=tab[i][a-1-i];
        }
        if(zi!=sum)
        {
            b=1;
        }
        if(b==1)    printf("No");
        else printf("Yes");
    }
    scanf(" ");
}
