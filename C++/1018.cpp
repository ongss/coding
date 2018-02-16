#include<stdio.h>
char direc(char a,int oder)
{
    int b;
    if(a=='E') b=0;
    if(a=='S') b=1;
    if(a=='W') b=2;
    if(a=='N') b=3;
    if(oder==1) b++; //RT
    if(oder==2) b--; //LT
    if(oder==3) b+=2; //BW
    if(b==0||b==4) return 'E';
    if(b==1||b==5) return 'S';
    if(b==2||b==6) return 'W';
    if(b==3||b==-1) return 'N';
}
int main()
{
    int a,b,c,d=0,e,i,j,k,x=0,y=0,oder;
    char Di='E',cm[3];
    scanf("%d",&a);
    int list[a];
    for(i=0;i<a;i++)
    {
        scanf("%s",cm);
        scanf("%d",&list[i]);
        if(cm[0]=='F') oder=0;
        if(cm[0]=='R') oder=1;
        if(cm[0]=='L') oder=2;
        if(cm[0]=='B') oder=3;
        Di=direc(Di,oder);
        if(Di=='E') x+=list[i];
        if(Di=='W') x-=list[i];
        if(Di=='N') y+=list[i];
        if(Di=='S') y-=list[i];
        if(x>50000||x<-50000||y>50000||y<-50000)
        {
            d=1;
        }
    }
    if(d==1) printf("DEAD");
    else printf("%d %d\n%c",x,y,Di);
    scanf(" ");
}
