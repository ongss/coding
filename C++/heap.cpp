#include<stdio.h>
#include<math.h>
void swich(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int arr[1000]={-1},n,i,j,k,count,y,a,b,c,x,layer;
    char cmd[1000];
    for(i=0;i<1000;i++) arr[i]=-1;
    scanf("%d",&n);
    for(i=0,count=0;i<n;i++)
    {
        scanf("%c",&cmd[i]);
        for(j=0,a=count;a>=0;j++)
        {
            a-=pow(2,j);
        }
        layer=j-1;
        if(cmd[i]=='P')
        {
            scanf("%d",&arr[count]);
            //printf("%d",arr[0]);
            x=count;
            count++;
            for(j=0;j<layer;j++)
            {
                if(arr[(x-1)/2]<arr[x])
                {
                    swich(&arr[(x-1)/2],&arr[x]);
                    x=(x-1)/2;
                }
            }
           printf("arr[0]=%d arr[1]=%d arr[2]=%d arr[3]==%d\n",arr[0],arr[1],arr[2],arr[3]);
        }
        if(cmd[i]=='Q')
        {
            for(j=0,a=count;a>=0;j++)
            {
                a-=pow(2,j);
            }
            layer=j;
            x=0;
            //return arr[0];
            printf("pop=%d ",arr[0]);
            arr[0]=-1;
            if(count>0) count--;
            for(j=0;j<layer;j++)
            {    
                if(arr[x*2+1]>arr[x*2+2])
                {
                    arr[x]=arr[x*2+1];
                    x=x*2+1;
                }
                else
                {
                    arr[x]=arr[x*2+2];
                    x=x*2+2;
                }
            }
            printf("arr[0]=%d arr[1]=%d arr[2]=%d arr[3]==%d\n",arr[0],arr[1],arr[2],arr[3]);
        }
    }
    scanf(" ");
}
