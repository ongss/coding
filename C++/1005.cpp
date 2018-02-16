#include<stdio.h>
int main()
{
    int a,b,c=-127,i,j,k;
    scanf("%d",&a);
    int arr[a],sarr[a-2][3],max[3];
    for(i=0;i<a;i++)
    {
                    scanf("%d",&arr[i]);
    }
    for(i=0;i<a-2;i++)
    {
                      b=0;
                      for(j=0;j<3;j++)
                      {
                                      sarr[i][j]=arr[i+j];
                                      b=b+arr[i+j];
                      }
                      if(b>c)
                      {
                             c=b;
                             max[0]=sarr[i][0];
                             max[1]=sarr[i][1];
                             max[2]=sarr[i][2];
                      }
    }
    if(c<0)
    {
           printf("Empty sequence");
    }
    /*else 
    {
         printf("%d ",max[0]);
         printf("%d ",max[1]);
         printf("%d\n",max[2]);
         printf("%d",c);
    }*/
    scanf(" ");
}
