#include<stdio.h>
#include<string.h>
int n=7,A=0,B=0,C=0,D=0,E=0,F=0,G=0;
int out()
{
	int i,j,min=40000,arr[7]={40001};
	for(i=0;i<7;i++) arr[i]=40001;
	//printf("%d %d %d %d %d %d %d %d \n",A,B,C,D,E,F,G);
	if(A>=0) arr[0]=A;
	if(B>=0) arr[1]=B;
	if(C>=0) arr[2]=C;
	if(D>=0) arr[3]=D;
	if(E>=0) arr[4]=E;
	if(F>=0) arr[5]=F;
	if(G>=0) arr[6]=G;
	for(i=0;i<7;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
			j=i;
			//printf("gh ");
		}
	}
	arr[j]=40000;
	//printf("%d ",j);
	for(i=0;i<7;i++)
	{
		
		if(arr[i]==min) return 0;
	}
	//printf("%d %d %d %d %d %d %d %d \n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6]);
	if(arr[0]==40000) A=-30000;
	if(arr[1]==40000) B=-30000;
	if(arr[2]==40000) C=-30000;
	if(arr[3]==40000) D=-30000;
	if(arr[4]==40000) E=-30000;
	if(arr[5]==40000) F=-30000;
	if(arr[6]==40000) G=-30000;
	n--;
}
int main()
{
	int arr[7],i,j,k,len,ans[7],max=0;
	char week[10][10000];
	for(i=0;i<7;i++)
	{
		scanf("%s",week[i]);
		len=strlen(week[i]);
		if(week[i][0]=='!') break;
		for(j=0;j<len;j++)
		{
			if(week[i][j]=='A') A++;
			if(week[i][j]=='B') B++;
			if(week[i][j]=='C') C++;
			if(week[i][j]=='D') D++;
			if(week[i][j]=='E') E++;
			if(week[i][j]=='F') F++;
			if(week[i][j]=='G') G++;
		}
		out();
	}
	arr[0]=A;
	arr[1]=B;
	arr[2]=C;
	arr[3]=D;
	arr[4]=E;
	arr[5]=F;
	arr[6]=G;
	for(i=0;i<n;i++)
	{
		max=0;
		for(j=0;j<n;j++)
		{
			if(max<arr[j])
			{
				max=arr[j];
				k=j;
			}
		}
		ans[i]=arr[k];
		arr[k]=-1;
	}
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		if(ans[i]==A)
		{
			printf("A %d\n",A);
			A=-1;
		}
		if(ans[i]==B)
		{
			printf("B %d\n",B);
			B=-1;
		}
		if(ans[i]==C)
		{
			printf("C %d\n",C);
			C=-1;
		}
		if(ans[i]==D)
		{
			printf("D %d\n",D);
			D=-1;
		}
		if(ans[i]==E)
		{
			printf("E %d\n",E);
			E=-1;
		}
		if(ans[i]==F)
		{
			printf("F %d\n",F);
			F=-1;
		}
		if(ans[i]==G)
		{
			printf("G %d\n",G);
			G=-1;
		}
	}
	/*printf("A= %d\n",A);
	printf("B= %d\n",B);
	printf("C= %d\n",C);
	printf("D= %d\n",D);
	printf("E= %d\n",E);
	printf("F= %d\n",F);
	printf("G= %d\n",G);*/
}
