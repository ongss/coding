#include<stdio.h>
#include<string.h>
int main()
{
	int arr[3]={0},i,j,k;
	char str[51];
	scanf("%s",str);
	k=strlen(str);
	arr[0]=1;
	for(i=0;i<k;i++)
	{
		if(str[i]=='A')
		{
			j=arr[0];
			arr[0]=arr[1];
			arr[1]=j;
		}
		if(str[i]=='B')
		{
			j=arr[1];
			arr[1]=arr[2];
			arr[2]=j;
		}
		if(str[i]=='C')
		{
			j=arr[0];
			arr[0]=arr[2];
			arr[2]=j;
		}
	}
	if(arr[0]==1) printf("1");
	if(arr[1]==1) printf("2");
	if(arr[2]==1) printf("3");
}

