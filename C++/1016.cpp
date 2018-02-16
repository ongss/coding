#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=1,c=0,d=0,i,j,k;
    char arr[5],v[999],v0[999]={'0'};
    int s[999]={0};
    double x=0,y=0,e;
    double root2=sqrt(2);
    for(i=0;i<999;i++)
    {
        a=0;
        scanf("%s",arr);
        if(arr[0]=='*')   break;
        d++;
        for(j=0;j<5;j++)
        {
            if(arr[j]=='\0')
            {
                v[i]=arr[j-1];
                if(arr[j-2]=='N'||arr[j-2]=='S'||arr[j-2]=='E'||arr[j-2]=='W')
                {
                    v0[i]=arr[j-2];
                    a--;
                }
                break;
            }
            a++;
        }
        a-=2;
        b=1;
        for(j=a;j>=0;j--)
        {
            if(arr[j]=='0') c=0;
            if(arr[j]=='1') c=1;
            if(arr[j]=='2') c=2;
            if(arr[j]=='3') c=3;
            if(arr[j]=='4') c=4;
            if(arr[j]=='5') c=5;
            if(arr[j]=='6') c=6;
            if(arr[j]=='7') c=7;
            if(arr[j]=='8') c=8;
            if(arr[j]=='9') c=9;
            s[i]+=c*b;
            b=b*10;
        }
    }
    for(i=0;i<d;i++)
    {
        if(v[i]=='N') y+=s[i];
        if(v[i]=='S') y-=s[i];
        if(v[i]=='W') 
        {
            if(v0[i]=='S')
            {
                x-=s[i]/root2;
                y-=s[i]/root2;
            }
            else if (v0[i]=='N')
            {
                x-=s[i]/root2;
                y+=s[i]/root2;
            }
            else x-=s[i];
        }
        if(v[i]=='E')
        {
            if(v0[i]=='S')
                {
                    x+=s[i]/root2;
                    y-=s[i]/root2;
                }
            else if (v0[i]=='N')
                {
                    x+=s[i]/root2;
                    y+=s[i]/root2;
                }
            else x+=s[i];
        }       
    }
    e=sqrt(x*x+y*y);
    printf("%.3f %.3f\n%.3f",x,y,e);
    scanf(" ");
}
