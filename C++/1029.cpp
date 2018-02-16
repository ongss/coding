#include<stdio.h>
int main()
{
	int a,b,mac[100000]={0},num[100000],i,j,k,n,t,q,count=0,ans[100000],x,y=0;
	scanf("%d%d%d",&n,&t,&q);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		for(j=0;j<b;j++)
		{
			if(mac[a+j-1]==0) mac[a+j-1]=1;
			else if(mac[a+j-1]==1) mac[a+j-1]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		count=0;
		k=mac[i];
		for(j=0;j<n-i;j++)
		{
			if(k==mac[i+j])
			{
				x=j+i;
				count++;
			} 
			else break;
		}
		for(j=i;j<=x;j++)
		{
			num[j]=count;
		}
		i=x;
	}
	for(i=0;i<q;i++)
	{
		scanf("%d",&a);
		ans[i]=num[a-1];
	}
	/*for(i=0;i<q;i++)
	{
		scanf("%d",&a);
		a--;
		k=mac[a];
		count=0;
		for(j=0;j<n-a;j++)
		{
			if(k==mac[a+j]) count++;
			else break;
		}
		for(j=a-1;j>=0;j--)
		{
			if(k==mac[j]) count++;
			else break;
		}
		ans[i]=count;
	}*/
	for(i=0;i<q;i++) printf("%d\n",ans[i]);
	//for(i=0;i<n;i++) printf("%d\n",num[i]);
}
