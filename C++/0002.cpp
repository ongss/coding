#include<stdio.h>
int main()
{
    int a,b=-2000000000,c=2000000000,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
                    scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
                    if(b<arr[i]) b=arr[i];
                    if(c>arr[i]) c=arr[i];
    }
    printf("%d\n",c);
    printf("%d\n",b);
    scanf(" ");
}
