#include<stdio.h>
#include<math.h>
int palin(int a)
{
	int count=0,i,j=0,k=1,b,x;
	b=a;
	while(a>0)
	{
		count++;
		a=a/10;
	}
	a=b;
	int arr[count];
	for(i=0;i<count;i++)
	{
		arr[i]=b/k;
		arr[i]=arr[i]%10;
		k=k*10;
	}
	k=pow(10,count-1);
	for(i=0;i<count;i++)
	{
		j+=arr[i]*k;
		k=k/10;
	}
	if(j==a) return 0;
	if(j!=a) return 1;
}
int main()
{
	int a,b,num,i,j,k,l,arr[10000],prime[10000],count=0;
	scanf("%d",&num);
	a=num;
	for(i=0;i<num*10;i++)
	{
		arr[i]=i;
	}
	for(i=2;i<num*10;i++)
	{
		if(arr[i]!=0)
		{
			prime[count]=arr[i];
			count++;
			for(j=i+1;j<num*10;j++)
			{	
				k=arr[j];
				l=arr[i];
				if(k%l==0) arr[j]=0;
			}
		} 
	}
	for(i=0;i<count;i++)
	{
		//printf("%d ",prime[i]);
		//printf("prime=%d palin=%d\n",prime[i],palin(prime[i]));
		if(prime[i]>=num&&palin(prime[i])==0)
		{
			printf("%d ",prime[i]);
			break;
		}
	}
}
