#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d=a+c+b;
    if(d>=80) printf("A");
    else if(d>=75) printf("B+");
    else if(d>=70) printf("B");
    else if(d>=65) printf("C+");
    else if(d>=60) printf("C");
    else if(d>=55) printf("D+");
    else if(d>=50) printf("D");
    else printf("F");
    scanf(" ");
}
