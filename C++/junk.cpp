#include<stdio.h>
void sw(int *a,int *b)//int *a=&x int *b=&y;
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int x=1,y=5;
    sw(&x,&y);
    printf("%d %d",x,y);
    scanf(" ");
}
