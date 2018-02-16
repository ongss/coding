#include<stdio.h>
int arr[2][10000],p_arr[10000],k=0,m,n,l,O=0;
void merge_sort(int left,int right)
{
	int size=right-left+1;
	if(size==1) return;
	merge_sort(left,(left+right)/2);
	merge_sort((left+right)/2+1,right);
	m=left;
	n=left+size/2;
	for(l=0;l<size;l++)
	{
		if(arr[0][m]>arr[0][n]||n>right&&m<left+size/2) arr[1][l]=arr[0][m++];
		else  arr[1][l]=arr[0][n++];
	}
	printf("\n%d %d %d %d",arr[0][0],arr[0][1],arr[0][2],arr[0][3]);
	for(l=0;l<size;l++)
	{
		arr[0][left+l]=arr[1][l];
	}
	printf("\n%d %d %d %d",arr[1][0],arr[1][1],arr[1][2],arr[1][3]);
}
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[0][i]);
	}
	merge_sort(0,n-1);
	for(i=0;i<n;i++)
	{
		printf("\n%d ",arr[0][i]);
	}/*
	printf("\n%d %d %d %d",arr[1][0],arr[1][1],arr[1][2],arr[1][3]);*/
}
