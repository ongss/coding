#include<stdio.h>
int main()
{
	int y,x,tab[8][8]={0},n,i,j,k,count,t;
	char a[3];
	scanf("%d",&n);
	tab[3][3]=1;
	tab[4][4]=1;
	tab[4][3]=2;
	tab[3][4]=2;
	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
		scanf("%d",&y);
		x=a[0]-'a';
		y--;
		count=0;
		t=0;
		if(i%2==0)
		{
			tab[y][x]=2;
			count=0;
			t=0;
			for(j=x-1;j>=0;j--)
			{
				if(tab[y][j]==0) break;
				if(tab[y][j]==2)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y][x-j-1]=2;
				}
			}
			count=0;
			t=0;
			for(j=x+1;j<8;j++)
			{
				if(tab[y][j]==0) break;
				if(tab[y][j]==2)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y][x+j+1]=2;
				}
			}
			count=0;
			t=0;
			for(j=y-1;j>=0;j--)
			{
				if(tab[j][x]==0) break;
				if(tab[j][x]==2)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y-j-1][x]=2;
				}
			}
			count=0;
			t=0;
			for(j=y+1;j<8;j++)
			{
				if(tab[j][x]==0) break;
				if(tab[j][x]==2)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y+j+1][x]=2;
				}
			}
			count=0;
			t=0;
			for(j=y+1;j<8;j++)
			{
				if(j>=8) break;
				if(x+j-y>=8) break;
				if(j<0) break;
				if(x+j-y<0) break;
				if(tab[j][x+j-y]==0) break;
				if(tab[j][x+j-y]==2)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y+j+1][x+j+1]=2;
				}
			}
			count=0;
			t=0;
			for(j=y-1;j>=0;j--)
			{
				if(j>=8) break;
				if(x-j+y>=8) break;
				if(j<0) break;
				if(x-j+y<0) break;
				
				if(tab[j][x-j+y]==0) break;
				if(tab[j][x-j+y]==2)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y-j-1][x+j+1]=2;
				}
			}
			count=0;
			t=0;
			for(j=y+1;j<8;j++)
			{
				if(j>=8) break;
				if(x-j+y>=8) break;
				if(j<0) break;
				if(x-j+y<0) break;
				
				if(tab[j][x-j+y]==0) break;
				if(tab[j][x-j+y]==2)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y+j+1][x-j-1]=2;
				}
			}
			count=0;
			t=0;
			for(j=y-1;j>=0;j--)
			{
				if(j>=8) break;
				if(x+j-y>=8) break;
				if(j<0) break;
				if(x+j-y<0) break;
				if(tab[j][x+j-y]==0) break;
				if(tab[j][x+j-y]==2)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y-j-1][x-j-1]=2;
				}
			}
		}
		if(i%2==1)
		{
			tab[y][x]=1;
			count=0;
			t=0;
			for(j=x-1;j>=0;j--)
			{
				if(tab[y][j]==0) break;
				if(tab[y][j]==1)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y][x-j-1]=1;
				}
			}
			count=0;
			t=0;
			for(j=x+1;j<8;j++)
			{
				if(tab[y][j]==0) break;
				if(tab[y][j]==1)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y][x+j+1]=1;
				}
			}
			count=0;
			t=0;
			for(j=y-1;j>=0;j--)
			{
				if(tab[j][x]==0) break;
				if(tab[j][x]==1)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y-j-1][x]=1;
				}
			}
			count=0;
			t=0;
			for(j=y+1;j<8;j++)
			{
				if(tab[j][x]==0) break;
				if(tab[j][x]==1)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y+j+1][x]=1;
				}
			}
			count=0;
			t=0;
			for(j=y+1;j<8;j++)
			{
				if(j>=8) break;
				if(x+j-y>=8) break;
				if(j<0) break;
				if(x+j-y<0) break;
				if(tab[j][x+j-y]==0) break;
				if(tab[j][x+j-y]==1)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y+j+1][x+j+1]=1;
				}
			}
			count=0;
			t=0;
			for(j=y-1;j>=0;j--)
			{
				if(j>=8) break;
				if(x-j+y>=8) break;
				if(j<0) break;
				if(x-j+y<0) break;
				
				if(tab[j][x-j+y]==0) break;
				if(tab[j][x-j+y]==1)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y-j-1][x+j+1]=1;
				}
			}
			count=0;
			t=0;
			for(j=y+1;j<8;j++)
			{
				if(j>=8) break;
				if(x-j+y>=8) break;
				if(j<0) break;
				if(x-j+y<0) break;
				
				if(tab[j][x-j+y]==0) break;
				if(tab[j][x-j+y]==1)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y+j+1][x-j-1]=1;
				}
			}
			count=0;
			t=0;
			for(j=y-1;j>=0;j--)
			{
				if(j>=8) break;
				if(x+j-y>=8) break;
				if(j<0) break;
				if(x+j-y<0) break;
				if(tab[j][x+j-y]==0) break;
				if(tab[j][x+j-y]==1)
				{
					t=1;
					break;
				}
				count++;
			}
			if(count>0&&t==1)
			{
				for(j=0;j<count;j++)
				{
					tab[y-j-1][x-j-1]=1;
				}
			}
		}
		/*for(k=0;k<8;k++)
	    {	
			for(j=0;j<8;j++)
			{
				printf("%d",tab[k][j]);
			}
			printf("\n");
		}*/
	}
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(tab[i][j]==0) printf(".");
			if(tab[i][j]==1) printf("O");
			if(tab[i][j]==2) printf("X");
		}
		printf("\n");
	}
}
