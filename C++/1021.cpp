#include<stdio.h>
int main()
{
    int n,i,j,k,Q=0,P[30000]={-1},count=0,ans[15000],max=-1,point=0;
    char cmd[30000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&cmd[i]);
        if(cmd[i]=='P')
        {   
            scanf("%d",&P[count]);
            count++;
            for(j=0;j<count;j++)
            {
                if(max<P[j])
                {
                    max=P[j];
                    point=j;
                }
            }
        }
        if(cmd[i]=='Q')
        {
            ans[Q]=max;
            Q++;
            max=-1;
            P[point]=-1;
            for(j=0;j<count;j++)
            {
                if(max<P[j])
                {
                    max=P[j];
                    point=j;
                }
            }
        }
    }
    for(i=0;i<Q;i++) printf("%d\n",ans[i]);
    scanf(" ");
}
