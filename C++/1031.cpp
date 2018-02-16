#include<stdio.h>
int M[100000][2],p,n,m,high=0;
int way(int start,int power)
{
	int i,j,k;
	if(start==n)
	{
		high=n;
		return 0;
	}
	if(power==0) return 0;
	power--;
	for(i=0;i<m;i++)
	{
		if(start==M[i][0])
		{
			if(high<M[i][1])
			{
				high=M[i][1];
			}
			way(M[i][1],power);
		}	
	}
	
}
int main()
{
	int i,j,k;
	scanf("%d%d%d",&p,&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&M[i][0],&M[i][1]);
	}
	way(1,p);
	printf("%d",high);
}
