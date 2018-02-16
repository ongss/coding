#include<stdio.h>
int main()
{
    int a[3],b,c,d,e,i,j,k;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[j]>a[j+1])
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
    }
    int A,B,C;
    A=a[0];
    B=a[1];
    C=a[2];
    char arr[10];
    scanf("%s",arr);
    for(i=0;i<3;i++)
    {
        if(arr[i]=='A') printf("%d ",A);
        if(arr[i]=='B') printf("%d ",B);
        if(arr[i]=='C') printf("%d ",C);
    }
    scanf(" ");
}
