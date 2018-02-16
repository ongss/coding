#include<stdio.h>

void swich(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int a,b,i,j,x,k=0,n,arr[100000]={-1};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        a=i;
        b=i;
        for(k=1;a>=k;k++) a-=k;
        x=i;
        for(j=0;j<k;j++)
        {
            if(x==0) break;
            if(arr[x]>arr[(x)/2]) 
            {
                swich(&arr[x],&arr[(x)/2]);
                x=x/2;
            }
            
        }
        printf("%d",arr[0]);
    }
    scanf(" ");
}
