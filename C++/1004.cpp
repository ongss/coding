#include<stdio.h>
int main()
{
    int a,b,cnt=0,d,e,i,j,k=0,l,clas,n=0,stn;
    scanf("%d %d",&a,&b);
    int cls[1000]={0},std[1000]={0},line[1000]={0},nwline[1000]={0},clsline[1000];
    for(i=0;i<b;i++)
    {
                    scanf("%d %d",&cls[i],&std[i]);
    }
    for(i=0;;i++)
    {
                 scanf("%c",&b);
                 if(b=='E')
                 {
                          scanf("%d",&line[k]);
                          for(j=0;j<b;j++)
                          {
                                    if(line[k]==std[j])
                                    {
                                                       clsline[k]=cls[j];
                                                       k++;
                                    }
                                    if(clsline[j]!=clsline[j+1]&&clsline[j+1]!=0)
                                    {
                                                        clas=clsline[j+1];
                                                        stn=line[j+1];
                                                        for(e=k-1;e>=0;e--)
                                                        {
                                                                  if(clas==clsline[e])
                                                                  {
                                                                                      for(d=k-e-1;d>0;d--)
                                                                                      {
                                                                                                          line[d+1]=line[d];
                                                                                                          clsline[d+1]=clsline[d];
                                                                                      }
                                                                                      clsline[e]=clas;
                                                                                      line[e]=stn;
                                                                  }
                                                                                      
                                                        }
                                    }
                          }
                 }
                 if(b=='D') cnt++;
                 if(b=='X') break;
    }
    /*for(i=0;i<k;i++)
    {
                    for(j=0;j<k;j++)
                    {
                                    if(clsline[j]!=0)
                                    {
                                                  clas=clsline[j];
                                                  break;
                                    }
                    }
                    for(j=0;j<k;j++)
                    {
                                   if(clas==clsline[j])
                                   {
                                                       nwline[n]=line[j];
                                                       clsline[j]=0;
                                                       n++;
                                   }
                    }
    }*/
    for(i=0;i<k;i++)
    {
                    printf("%d ",line[i]);
                    //printf("%d" ,clsline[i]);
    }
    scanf(" ");
}
