#include<stdio.h>
#include<string.h>
int palin(char *txt)
{
    int n=0,i,j,k,count=0;
    char intxt[201];
    n=strlen(txt);
    for(i=0;i<n;i++)
    {
        intxt[i]=txt[n-i-1];
    }
    for(i=0;i<n;i++)
    {
        if(intxt[i]==txt[i]) count++;
    }
    if(count==n) return 0;
    else return 1;
}
int main()
{
    char txt[201],half1[101]={'\0'};
    int n=0,i,j,k,count=0;
    scanf("%s",txt);
    n=strlen(txt);
    for(i=0;i<n;i++)
    {
        if(txt[i]<97) txt[i]=txt[i]+32;
    }
    if(palin(txt)==0)
    {
        for(i=0;i<(n/2);i++)
        {
            half1[i]=txt[i];
        }
        if(palin(half1)==0) printf("Double Palindrome");
        else printf("Palindrome");
    }
    else printf("No");
    scanf(" ");
}
