#include<stdio.h>
int main()
{
    int N1,N2,max=0,i,j,k,count=0;
    char DNA1[201],DNA2[201],MAX[201];
    scanf("%s%s",DNA1,DNA2);
    for(i=0;;i++)        if(DNA1[i]=='\0') break;
    N1=i;
    for(i=0;;i++)        if(DNA2[i]=='\0') break;
    N2=i;
    for(i=0;i<N2;i++)
    {
        for(j=0;j<N1;j++)
        {
            count=0;
            for(k=0;k<N1;k++)
            {
                if(DNA2[i+k]!=DNA1[j+k]) break;
                count++;
            }
            if(count>max)
            {
                max=count;
                for(k=0;k<max;k++) MAX[k]=DNA1[j+k];
            }
        }
    }
    for(i=0;i<max;i++)  printf("%c",MAX[i]);
    scanf(" ");
}
