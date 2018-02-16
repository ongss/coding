#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i,j,k,sum=0;
    scanf("%d",&a);
    int cake=0,stock[5]={0};
    int arr[5]={0};
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        arr[0]+=b;
        scanf("%d",&c);
        arr[1]+=c;
        scanf("%d",&d);
        arr[2]+=d;
        scanf("%d",&e);
        arr[3]+=e;
        scanf("%d",&f);
        arr[4]+=f;
        sum=sum+b+c+d+e+f;
    }
    cake+=arr[0];
    cake+=arr[1];
    stock[3]+=arr[1];
    cake+=arr[2]/2;
    if(arr[2]%2==1)
    {
        stock[2]++;
        cake++;
    }
    for(j=0;j<arr[3];j++)
    {
        if(stock[3]>0)
        {
            stock[3]--;
            //arr[3]--;
        }
        else if(stock[2]>0)
        {
            //arr[3]--;
            stock[3]++;
        }
        else
        {
            cake++;
            //arr[3]--;
            stock[3]+=3;
        }
    }
    for(j=0;j<arr[4];j++)
    {
        if(stock[4]>0)
        {
            stock[4]--;
            //arr[4]--;
        }
        else if(stock[3]>0)
        {
            stock[3]--;
            stock[4]++;
            //arr[4]--;
        }
        else if(stock[2]>0)
        {
            //arr[4]--;
            stock[4]+=3;
            stock[2]--;
        }
        else
        {
                cake++;
                //arr[4]--;
                stock[4]+=7;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",stock[i]);
    }
    printf("%d",cake);
    scanf(" ");
}
