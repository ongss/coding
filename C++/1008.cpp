#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,f=0,g=0,i,j,k=0,m=0,n=0;
    scanf("%d",&a);
    int arr[a][3],high[300]={0},h[305]={0},ans[300]={0};
    int Nans[300],Nh[300];
    for(i=0;i<a;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        c=arr[i][0]-1;
        d=arr[i][2]-1;
        for(c;c<=d;c++)
        {
            if(arr[i][1]>high[c])
            {
                high[c]=arr[i][1];
            }
        }
    }
    for(i=0;i<225;i++) printf("%d ",high[i]);
    for(i=224;i>=0;i--)
    {
        if(high[i]==0) e++;
        else break;
    }
    for(i=0;i<225;i++)
    {
        for(j=f;j<225-e;j++)
        {
            if(high[j]==high[j+1])
            {
                 //ans[i]=j+2;
                 //f=j+1;
                // printf("^");
            }
            else 
            {
                g++;
                ans[k]=j+1;
                k++;                
                break;
            }
        }
        h[i]=high[j];
        if(g==1) f++;
        else f=ans[k]-1;
        g=0;
        if(i==225-e) break;
    }
    k=0;
    for(i=0;i<225-e;i++)
    {
        if(i==0)
        {
            Nh[k]=h[i];
            Nans[m]=ans[i];
            k++;
            m++;
            n++;
        } 
        if(h[i]!=h[i-1]&&i!=0)
        {
            Nh[k]=h[i];
            k++;
            n++;
        }
        if(ans[i]!=ans[i-1]&&i!=0)
        {
            Nans[m]=ans[i];
            m++;
        }
    }
    printf("1 ");
    for(i=0;i<n;i++)
    {
        if(Nh[i]<Nh[i+1])
        {
            Nans[i]++;
        }
        printf("%d %d ",Nh[i],Nans[i]);
    }
    printf("0 ");
    scanf(" ");
}
