#include<stdio.h>
int main()
{
	int n,k,price[10000],K[8][10000],i,j,l,arr[10000]={0},max=-1;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&price[i]);
		for(j=0;j<k;j++)
		{
			scanf("%d",&K[j][i]);
		}
	}
	for(i=0;i<n;i++)
	{
		max=-1;
		for(j=0;j<n;j++)
		{
			if(max<price[j])
			{
				max=price[j];
				l=j;
			}
		}
		price[l]=-1;
		arr[i]=max;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
