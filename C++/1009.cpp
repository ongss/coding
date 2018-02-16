#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c=0,d=0,e=0,i,j,k,l,z=1,x=0;
    scanf("%d %d",&a,&b);
    char tab1[4][3*a+1],tab2[4][3*b+1];
    int arr1[a],arr2[b],A=0,B=0;
    for(i=-1;i<3;i++) 
    {
        gets(tab1[i]);
    }
    for(i=0;i<3;i++) 
    {
        gets(tab2[i]);
    }
    /*for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++)
        { 
            printf("%c",tab2[i][j]); 
        }
        printf("\n");
    }*/
    char digit[10][3][3]={{{' ','_',' '},{'|',' ','|'},{'|','_','|'}},{{' ',' ',' '},{' ',' ','|'},{' ',' ','|'}},{{' ','_',' '},{' ','_','|'},{'|','_',' '}},{{' ','_',' '},{' ','_','|'},{' ','_','|'}},{{' ',' ',' '},{'|','_','|'},{' ',' ','|'}},{{' ','_',' '},{'|','_',' '},{' ','_','|'}},{{' ','_',' '},{'|','_',' '},{'|','_','|'}},{{' ','_',' '},{' ',' ','|'},{' ',' ','|'}},{{' ','_',' '},{'|','_','|'},{'|','_','|'}},{{' ','_',' '},{'|','_','|'},{' ','_','|'}}};
    /*for(i=0;i<10;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c",digit[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }*/
    for(l=0;l<a;l++)
    {
        for(i=0;i<10;i++)
        {
            for(j=0;j<3;j++)
            {
                for(k=0;k<3;k++)
                {
                    if(digit[i][j][k]==tab1[j][k+c]) d++;
                    else
                    {
                        e=1;
                        break;
                    }
                }
                if(e==1) break;
            }
            if(d==9)
            {   
                arr1[l]=i;
                c+=3;
                break;
            }
            e=0;
            d=0;
        }
    }
    for(i=a-1;i>=0;i--)
    {
        A=A+(z*arr1[i]);
        z=z*10;
    }
    c=0;
    z=1;
    d=0;
    e=0;
    for(l=0;l<b;l++)
    {
        for(i=0;i<10;i++)
        {
            for(j=0;j<3;j++)
            {   
                for(k=0;k<3;k++)
                {
                    if(digit[i][j][k]==tab2[j][k+c]) d++;
                    else
                    {
                        e=1;
                        break;
                    }
                }
                if(e==1) break;
            }
            if(d==9)
            {   
                arr2[l]=i;
                c+=3;
                break;
            }
            e=0;
            d=0;
        }
    }
    for(i=b-1;i>=0;i--)
    {
        B=B+(z*arr2[i]);
        z=z*10;
    }
    printf("%d ",A+B);
    scanf(" ");
}
