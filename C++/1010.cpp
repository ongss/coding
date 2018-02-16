#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,l;
    int cou=0,o=0;
    scanf("%d%d",&a,&b);
    char tab[100][100];
    for(i=0;i<a;i++)
    {
        scanf("%s",tab[i]);
    }
    scanf("%d",&c);
    int len[c];
    int ansx[c],ansy[c];
    char arr[c][16];
    for(i=0;i<c;i++)
    {
        scanf("%s",arr[i]);
    }
    for(i=0;i<c;i++)
    {
        len[i]=0;
        for(j=0;j<16;j++)
        {
            if(arr[i][j]=='\0') break;
            if(arr[i][j]<=90)
            {
                arr[i][j]+=32;
            }
            len[i]++;
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(tab[i][j]<=90)
            {
                tab[i][j]+=32;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<a;j++)
        {
            for(k=0;k<b;k++)
            {
                if(tab[j][k]==arr[i][0])
                {
                    if(tab[j+1][k]==arr[i][1])
                    {
                        cou=0;
                        for(l=0;l<len[i];l++)
                        {
                            if(arr[i][l]==tab[j+l][k])
                            {
                                cou++;
                            }
                            else break;
                            if(cou==len[i])
                            {
                            ansx[o]=j;
                            ansy[o]=k;
                            o++;
                            }
                        }
                    
                    }
                    if(tab[j-1][k]==arr[i][1])
                    {
                        cou=0;
                        for(l=0;l<len[i];l++)
                        {
                            if(arr[i][l]==tab[j-l][k])
                            {
                                cou++;
                            }
                            else break;
                            if(cou==len[i])
                            {
                                ansx[o]=j;
                                ansy[o]=k;
                                o++;
                            }
                        }
                    }
                    if(tab[j][k+1]==arr[i][1])
                    {
                        cou=0;
                        for(l=0;l<len[i];l++)
                        {
                            if(arr[i][l]==tab[j][k+l])
                            {
                                cou++;
                            }
                            else break;
                            if(cou==len[i])
                            {
                                ansx[o]=j;
                                ansy[o]=k;
                                o++;
                            }
                        }
                    }
                    if(tab[j][k-1]==arr[i][1])
                    {
                        cou=0;
                        for(l=0;l<len[i];l++)
                        {
                            if(arr[i][l]==tab[j][k-l])
                            {
                                cou++;
                            }
                            else break;
                            if(cou==len[i])
                            {
                                ansx[o]=j;
                                ansy[o]=k;
                                o++;
                            }
                        }      
                    }
                    if(tab[j+1][k+1]==arr[i][1])
                    {
                        cou=0;
                        for(l=0;l<len[i];l++)
                        {
                            if(arr[i][l]==tab[j+l][k+l])
                            {
                                cou++;
                            }
                            else break;
                            if(cou==len[i])
                            {
                                ansx[o]=j;
                                ansy[o]=k;
                                o++;
                            }
                        }
                    }
                    if(tab[j-1][k+1]==arr[i][1])
                    {
                        cou=0;
                        for(l=0;l<len[i];l++)
                        {
                            if(arr[i][l]==tab[j-l][k+l])
                            {
                                cou++;
                            }
                            else break;
                            if(cou==len[i])
                            {
                                ansx[o]=j;
                                ansy[o]=k;
                                o++;
                            }
                        }
                    }
                    if(tab[j+1][k-1]==arr[i][1])
                    {
                        cou=0;
                        for(l=0;l<len[i];l++)
                        {
                            if(arr[i][l]==tab[j+l][k-l])
                            {
                                cou++;
                            }
                            else break;
                            if(cou==len[i])
                            {
                                ansx[o]=j;
                                ansy[o]=k;
                                o++;
                            }
                        }
                        if(cou==len[i]) break;  
                    }
                    if(tab[j-1][k-1]==arr[i][1])
                    {
                        cou=0;
                        for(l=0;l<len[i];l++)
                        {
                            if(arr[i][l]==tab[j-l][k-l])
                            {
                                cou++;
                            }
                            else break;
                            if(cou==len[i])
                            {
                                ansx[o]=j;
                                ansy[o]=k;
                                o++;
                            }
                        }
                        if(cou==len[i]) break;
                        }
                    }
                }
            }
        }
    //print test
    /*for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%c",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<16;j++)
        {
            if(arr[i][j]=='\0') break;
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }*/
    for(i=0;i<c;i++)
    {
        printf("%d %d\n",ansx[i],ansy[i]);
    }
    scanf(" ");
}
