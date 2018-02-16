#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,c,d,i,j,k,o=0,I=0,V=0,X=0,L=0,C=0;
    scanf("%d",&n);
    /*for(i=1;;i++)
    {
                 c=pow(10,i);
                 d=num/c;
                 if(d==0)
                 {
                                     n=i;
                                     break;
                 }
    }
    int arr[n];
    c=1;
    for(i=0;i<n;i++)
    {
                    c=c*10;
                    arr[i]=num%c;
                    arr[i]=arr[i]-o;
                    o=o+arr[i];
    }*/
    //printf("%d",n);
    for(i=1;i<=n;i++)
    {
                     num=i;
                    //printf("%d ",arr[i]);
                    for(j=0;;j++)
                    {
                                 if(num>=100)
                                 {
                                                  C++;
                                                  num-=100;
                                 }
                                 else break;
                    }
                    if(num>=90)
                    {
                                  X++;
                                  C++;
                                  num-=90;
                    }
                    if(num>=50)
                    {
                                  L++;
                                  num-=50;
                    }
                    if(num>=40)
                    {
                                  L++;
                                  X++;
                                  num-=40;
                    }
                    for(j=0;;j++)
                    {
                                 if(num>=10)
                                 {
                                               num-=10;
                                               X++;
                                 }
                                 else break;
                    }
                    if(num>=9)
                    {
                                 num-=9;
                                 X++;
                                 I++;
                    }
                    if(num>=5)
                    {
                                 num-=5;
                                 V++;
                    }
                    if(num>=4)
                    {
                                 num-=4;
                                 V++;
                                 I++;
                    }
                    for(j=0;;j++)
                    {
                                 if(num>=1)
                                 {
                                           num-=1;
                                           I++;
                                 }
                                 else break;
                    }
    }
    printf("%d %d %d %d %d",I,V,X,L,C);
    scanf(" ");
}
