#include<stdio.h>
int A[26]={0};
int main()
{
	int a[3],b[3],c,num,i,ans[1000],count=0;
	char cmd;
	for(i=0;i<26;i++) A[i]=0;
	for(i=0;i<1000;i++)
	{
		scanf("%c",&cmd);
		if(cmd=='=')
		{
			scanf("%s",&a[0]);
			scanf("%d",&num);
			A[a[0]-65]=num;
		}
		if(cmd=='#')
		{
			scanf("%s",&a[0]);
			ans[count]=A[a[0]-65];
			count++;
		}
		if(cmd=='+')
		{
			scanf("%s%s",&a[0],&b[0]);
			A[a[0]-65]+=A[b[0]-65];
		}
		if(cmd=='-')
		{
			scanf("%s%s",&a[0],&b[0]);
			A[a[0]-65]-=A[b[0]-65];
		}
		if(cmd=='*')
		{
			scanf("%s%s",&a[0],&b[0]);
			A[a[0]-65]*=A[b[0]-65];
		}
		if(cmd=='/')
		{
			scanf("%s%s",&a[0],&b[0]);
			A[a[0]-65]/=A[b[0]-65];
		}
		if(cmd=='!') break;
	}
	for(i=0;i<count;i++)
	{
		printf("%d\n",ans[i]);
	}
	printf("!");
}
