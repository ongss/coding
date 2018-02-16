#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,COUNT=0,max=0,n,arr[500000],num[500000],prime[100000],ans[50000],P[100000]={0},i,j,k=0,count=0,last=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>max) max=arr[i];
	}
	for(i=2;i<=max;i++)
	{
		num[i]=i;
	}
	for(i=2;i<=max;i++)
	{
		if(num[i]!=0)
		{
			prime[count]=num[i];
			count++;
			for(j=i+1;j<=max;j++)
			{
				if(num[j]%num[i]==0) num[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		b=0;
		k=0;
		for(j=0;j<count;j++)
		{
			if(b!=j) k=0;
			b=j;
			//printf("%d %d\n",k,P[j]);
			if(arr[i]%prime[j]==0)
			{
				//printf("%d",prime[j]);
				k++;
				arr[i]=arr[i]/prime[j];
				if(k>P[j])
				{
					P[j]++;
					ans[COUNT]=prime[j];
					COUNT++;
				}
				j--;
			}
			if(arr[i]==1) break;
		}
	}
	for(i=0;i<COUNT;i++)
	{ 
		last=last*ans[i];
		//printf("%d ",ans[i]);
	}
	printf("%d",last);
	//for(i=0;i<count;i++) printf("%d ",prime[i]);
}
