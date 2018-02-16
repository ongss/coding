#include<stdio.h>
int n;
float rice[100000][2],price[100000];
int mini()
{
	float min=10000000;
	int i,j;
	for(i=0;i<n;i++)
	{
		if(min>price[i]&&rice[i][1]>0)
		{
			min=price[i];
			j=i;
		} 
	}
	return j;
}
int main()
{
	int min,m,i,j,k,l;
	float trader[100000],ans[100000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&rice[i][0],&rice[i][1]);
		price[i]=rice[i][0]/rice[i][1];
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%f",&trader[i]);
	}
	for(i=0;i<m;i++)
	{
		while(trader[i]>0)
		{
			min=mini();
			//printf("trader=%f min=%f ",trader[i],rice[min][1]);
			if(trader[i]<=rice[min][1])
			{
				rice[min][1]-=trader[i];
				ans[i]+=trader[i]*price[min];
				trader[i]=0;
				//printf("%f ",ans[i]);
			}
			if(trader[i]>rice[min][1])
			{
				trader[i]-=rice[min][1];
				ans[i]+=rice[min][1]*price[min];
				rice[min][1]=0;
				//printf("%f ",ans[i]);
			}
		}
	}
	//for(i=0;i<n;i++) printf("%f %f\n",rice[i][0],rice[i][1]);
	//for(i=0;i<n;i++) printf("%.3f\n",price[i]);
	for(i=0;i<m;i++) printf("%.3f\n",ans[i]);
}
