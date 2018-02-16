#include<stdio.h>
#include<math.h>
void re(int *count,int *times,int *arr,int x,int n)
{
    int i,j,k;
    j=pow(2,*times);
    for(i=0;i<n;i+=j)
    {  
        if(arr[i]==-1)
        {
            k=i;
            break;
        }
    }
    if(k%2==0)
    { 
        *count=*count+1;
        arr[k+j]=-1;
    }
    *times=*times+1;
    if(arr[n-1]==-1) return;
    if(*times==x) return;
    re(count,times,arr,x,n);
}
int main()
{
    int n,i,j=0,k,count=0,times=0;
    scanf("%d",&n);
    int arr[n*2];
    for(i=n;i>0;)
    {
        j++;
        i=i-pow(2,j);
    }
    for(i=0;i<2*n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    re(&count,&times,arr,j,n);
    printf("%d",count);
    scanf(" ");
}
