#include<stdio.h>
int fac[20000];
int sum(int a,int b)
{
	int i,c=0;
	for(i=0;i<b-a;i++)
	{
		c+=fac[a+i];
	}
	return c;
}
int max(int a,int b,int c)
{
	int i,j=-10000000,k,arr[3];
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	for(i=0;i<3;i++)
	{
		if(j<arr[i]) j=arr[i];
	}
	return j;
}
int min(int a,int b,int c)
{
	int i,j=10000000,k,arr[3];
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	for(i=0;i<3;i++)
	{
		if(j>arr[i]) j=arr[i];
	}
	return j;
}
int main()
{
	int n,i,j,k,dif=100000,ans1,ans2,sigma,sigmai=0,part1,part2,part3;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&fac[i]);
	}
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			//printf("%d %d %d\n",sum(0,j),sum(j,i),sum(i,n));
			if(dif>max(sum(0,j),sum(j,i),sum(i,n))-min(sum(0,j),sum(j,i),sum(i,n)))
			{
				//printf("max=%d min=%d\n",max,min);
				dif=max(sum(0,j),sum(j,i),sum(i,n))-min(sum(0,j),sum(j,i),sum(i,n));
				ans1=i+1;
				ans2=j+1;
			}
		}
	}*/
	sigma=sum(0,n);
	sigmai=0;
	for(i=0;i<n;i++)
	{
		part1=0;
		part3=sigma-sigmai;
		part2=sum(0,i);
		for(j=0;j<i;j++)
		{
			part1+=fac[j];
			part2-=fac[j];
			if(dif>max(part1,part2,part3)-min(part1,part2,part3))
			{
				//printf("max=%d min=%d\n",max(part1,part2,part3),min(part1,part2,part3));
				dif=max(part1,part2,part3)-min(part1,part2,part3);
				ans1=i+1;
				ans2=j+2;
			}
			//printf("%d %d %d \n",part1,part2,part3);
		}
		sigmai+=fac[i];
	}
	printf("%d %d",ans2,ans1);
}
