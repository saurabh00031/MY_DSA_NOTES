
////////////////////////////////////////////////////////////////////////////////////////////////



#include<bits/stdc++.h>
using namespace std;


void maxProfit(int wt[],int val[],int W,int n) //inputs
{
    static int t[100][100];
    memset(t,0,sizeof(t));

     
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
           if(wt[i-1]<=j)
           {
               t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
           }
           else
           {
              t[i][j]=t[i-1][j];
           }
        }
    }
    cout<<t[n][W]<<endl;
   
}

int main()
{
   
   int val[]={60,100,120};
   int wt[]={10,20,30};
   int n=3;
   int W=50;
   maxProfit(wt,val,W,n);
   
   
   
   
   
}

/////////////////////////////////////////////////////////////////////////////////////////////////


//topp-down//





