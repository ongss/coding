#include<stdio.h>
/*void gv(char *tab,int a,int b)
{
    int i,j,k;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            //printf("%d",tab[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(tab[i][j]!='-'&&tab[i][j]!='#')
            {
                for(k=j+1;k<b;k++)
                {
                    if(tab[i][k]=='-')
                    {
                        tab[i][k]=tab[i][k-1];
                        tab[i][k-1]='-';
                    }
                    else break;
                }
            }
        }
    }
}*/
int main()
{
    //input
    int score=0;
    int a,b,c,d,e,i,j,k;
    int listx[1000],listy[1000];
    scanf("%d%d",&a,&b);
    char tab[1000][1000]={'0'};
    for(i=0;i<a;i++)
    {
        scanf("%s",tab[i]);
    }
    scanf("%d",&c);
    int x[100],y[100];
    int m[100];
    for(i=0;i<c;i++)
    {
        scanf("%d",&y[i]);
        scanf("%d",&x[i]);
        scanf("%d",&m[i]);
    }
    //down
    for(i=a-1;i>=0;i--)
    {
        for(j=0;j<b;j++)
        {
            if(tab[i][j]!='-'&&tab[i][j]!='#')
            {
                for(k=i+1;k<a;k++)
                {
                    if(tab[k][j]=='-')
                    {
                        tab[k][j]=tab[k-1][j];
                        tab[k-1][j]='-';
                    }
                    else break;
                }
            }
        }
    }
    //disappear + score plus
    e=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(tab[i][j]!='-'&&tab[i][j]!='#')
            {
                if(tab[i][j]==tab[i+1][j])
                {
                    listx[e]=i;
                    listy[e]=j;
                    e++;
                    listx[e]=i+1;
                    listy[e]=j;
                    e++;
                }
                if(tab[i][j]==tab[i][j+1])
                {
                    listx[e]=i;
                    listy[e]=j;
                    e++;
                    listx[e]=i;
                    listy[e]=j+1;
                    e++;
                }
            }
        }
    }
    for(i=0;i<e;i++)
    {
        if(tab[listx[i]][listy[i]]!='-')
        {
            tab[listx[i]][listy[i]]='-';
            score+=5;
        }
    }
    //print test
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%c",tab[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<c;i++)
    {
        //move
        for(i=0;i<c;i++)
        {
            if(m[i]==0)
            {
                tab[y[i]][x[i]-1]=tab[y[i]][x[i]];
                tab[y[i]][x[i]]='-';
            }
            if(m[i]==1)
            {
                tab[y[i]][x[i]+1]=tab[y[i]][x[i]];
                tab[y[i]][x[i]]='-';
            }
        }
        //down
        for(i=a-1;i>=0;i--)
        {
            for(j=0;j<b;j++)
            {
                if(tab[i][j]!='-'&&tab[i][j]!='#')
                {
                    for(k=i+1;k<a;k++)
                    {
                        if(tab[k][j]=='-')
                        {
                            tab[k][j]=tab[k-1][j];
                            tab[k-1][j]='-';
                        }
                        else break;
                    }
                }
            }
        }
        //disappear + score plus
        e=0;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(tab[i][j]!='-'&&tab[i][j]!='#')
                {
                    if(tab[i][j]==tab[i+1][j])
                    {
                        listx[e]=i;
                        listy[e]=j;
                        e++;
                        listx[e]=i+1;
                        listy[e]=j;
                        e++;
                    }
                    if(tab[i][j]==tab[i][j+1])
                    {
                        listx[e]=i;
                        listy[e]=j;
                        e++;
                        listx[e]=i;
                        listy[e]=j+1;
                        e++;
                    }
                }
            }
        }
        for(i=0;i<e;i++)
        {   
            if(tab[listx[i]][listy[i]]!='-')
            {
                tab[listx[i]][listy[i]]='-';
                score+=5;
            }
        } 
    }
    
    //print test
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%c",tab[i][j]);
        }
        printf("\n");
    }
    printf("%d",score);
    scanf(" ");
}
