#include<stdio.h>
int arr[2][1000];
void merge(int left,int right)
{
	int size=right-left+1;
	if(size==1) 
	{
		arr[1][left]=arr[0][left];
		return;
	}
	merge(left,(left+right)/2);
	merge((left+right)/2+1,right);
	int j=0;
	if(size%2==0) j=0;
	else j=1;
	int m=left,n=left+size/2+j;
	for(int i=0;i<size;i++)
	{
		if((arr[1][m]>arr[1][n]||n>right)&&m<left+size/2+j) arr[0][left+i]=arr[1][m++];
		else 
		{
			arr[0][left+i]=arr[1][n++];
		}
	}
	for(int i=0;i<size;i++)
	{
		arr[1][left+i]=arr[0][left+i];
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[0][i]);
	}
	merge(0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[0][i]);
	}
}
