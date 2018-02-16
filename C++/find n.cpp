#include<stdio.h>
#include<stdlib.h>
int count=0,pst=1;
typedef struct node{
	int x;
	struct node *p;
}Node;
Node *head=NULL;
Node *tail=NULL;
Node *pnt=head;
void ints(int n)
{
	Node *t=head;
	head=(Node*)malloc(sizeof(node));
	if(count==0) tail=head;
	head->p=t;
	head->x=n;
	count++;
}
void gth(int n)
{
	Node *a=head;
	Node *b=a;
	for(int i=0;i<n-1;i++)
	{
		b=a;
		a=a->p;
	}
	b->p=a->p;
	a->p=head;
	head=a;
	
}
void gtt(int n)
{
	Node *a=head;
	Node *b=a;
	for(int i=0;i<n-1;i++)
	{
		b=a;
		a=a->p;
	}
	b->p=a->p;
	tail->p=a;
	tail=a;
}
void check()
{
	Node *a=head;
	for(int i=0;i<count;i++)
	{
		printf("%d ",a->x);
		a=a->p;
	}
}
/*int fix(int n)
{
	int f_pst=1;
	Node *a=head;
	for(int i=0;i<count;i++)
	{
		if((a->x)>n) 
		{
			gtt(a->x);
		}
		if((a->x)<n)
		{
			gth(a->x);
			f_pst++;
		}
		else 
		{
			pnt=a;
		} 
		a=a->p;
	}
	return f_pst;
}*/
int fix(int n)
{
	Node *c=head;
	int x=0;
	for(int i=1;i<=count;i++)
	{
		printf("%d ",c->x);
		if(c->x>n)
		{
			gtt(x+i);
			x--;
		} 
		else if(c->x<n) 
		{
			gth(x+i);
			x++;
		}
		c=c->p;
	}
}
int find(Node *start,int size,int n)
{
	int x,f_pst;
	//f_pst=fix(x);
	if(size==1) return pnt->x;
	if(n<pst)
	{
		return find(start,f_pst-1,n);
	}
	else if(n==pst) return pnt->x;
	else if(n>pst)
	{
		pst+=f_pst;
		return find(pnt->p,size-f_pst-1,n);
	}
}
int main()
{
	ints(5);
	ints(2);
	ints(3);
	ints(4);
	ints(1);
	fix(4);
	//check();
}
