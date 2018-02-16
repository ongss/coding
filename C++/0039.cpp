#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    int arr[b];
    for(i=0;i<b;i++)
    {
                    scanf("%d",&arr[i]);
    }
    printf("%d",arr[1]);
    scanf(" ");
}
