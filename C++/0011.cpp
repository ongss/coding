#include<stdio.h>
int main()
{
	int n,t,count=0,arr[10],i,j,k,num[10]={-1};
	for(i=0;i<10;i++) num[i]=-1;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		k=arr[i]%42;
		t=0;
		for(j=0;j<=count;j++)
		{
			if(k==num[j])
			{
				t=1;
				break;
			} 
		}
		if(t==0)
		{
			num[count]=k;
			count++;
		}
	}
	printf("%d",count);
}
