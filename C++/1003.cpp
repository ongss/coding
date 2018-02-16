#include<stdio.h>
int main()
{
    int a,b,c=0,d,i,j,k,e;
    int arr[100]={0};
    arr[0]=0;
    arr[1]=6;
    arr[2]=9;
    scanf("%d",&a);
    for(i=3;;i++)
    {
                     arr[i]=arr[i-2]+6;
                     if(arr[i]>100)
                     {
                                   break;
                     }
    }
    for(i=1;i<=a;i++)
    {
                      for(j=0;j<100;j++)
                      {
                                   e=0;
                                   /*if(i==arr[j])
                                   {
                                                printf("%d \n",i);
                                                c++;
                                                break;
                                   }*/
                                   /*else
                                   {*/
                                       for(k=0;k<=5;k++)
                                       {
                                                        b=k*20;
                                                        d=i-b;
                                                        if(d<0) break;
                                                        //printf("%d ",d);
                                                        if(d==arr[j])
                                                        {
                                                                     c++;
                                                                     e++;
                                                                     printf("%d \n",i);
                                                                     break;
                                                        }
                                       }
                                   /*}*/
                                   if(e==1) break;
                      }
    }
    if(c==0) printf("no");
    scanf(" ");
}
