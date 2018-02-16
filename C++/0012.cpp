#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k;
	char str[16];
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(i==0) printf("..#..");
		else if(i%3==2) printf(".*..");
		else printf(".#..");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(i==0) printf(".#.#.");
		else if(i%3==2) printf("*.*.");
		else printf("#.#.");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(i==0) printf("#.%c.#",str[i]);
		else if(i%3==2) printf(".%c.*",str[i]);
		else if(i%3==1&&(i!=n-1||n%3!=2)) printf(".%c.*",str[i]);
		else printf(".%c.#",str[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(i==0) printf(".#.#.");
		else if(i%3==2) printf("*.*.");
		else printf("#.#.");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(i==0) printf("..#..");
		else if(i%3==2) printf(".*..");
		else printf(".#..");
	}
}
