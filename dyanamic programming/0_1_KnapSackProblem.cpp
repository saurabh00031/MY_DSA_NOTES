

////////////////////////////////////////////////////////////////////////////////////////////////


//DP//<knapsack problem  0/1>>//  ek time ki ek hi supply
//Greedy//<knapsack problem  fraction>>// adha bhi dal sakte hain jagah 2 ki hogi aur item 4 ka bhi ada daal sakte
//DP//<knapsack problem unBounded>>//  ek he chisss multiple time use kar sakte hain
//wt[] value[]

//W

//max profit


#include<bits/stdc++.h>
using namespace std;

int maxProfit(int wt[],int val[],int W,int n) //inputs
{
    
   //base conditions:think of smallest valid input
   if((n==0)||(W==0))
   {
       return 0;
   }
   else
   {
    //choice diagrams
    
    if(wt[n-1]<=W)
    {
        return max( val[n-1]+maxProfit(wt,val,W-wt[n-1],n-1) , maxProfit(wt,val,W,n-1) );
    }
    else
    {
        return maxProfit(wt,val,W,n-1) ;
    }
    
   } 

}

int main()
{
    //wt[]
    //val[]
    //W(capacity)
   //hint:write first recursive solution
   
  ////////////////// 
  
   //wt[]:
   //val[]:
   //W:
   //output: max profit;
   
  ///////////////// 
   int val[]={60,100,120};
   int wt[]={10,20,30};
   int n=3;
   int W=50;
   cout<<maxProfit(wt,val,W,n);
   
   
   
   
   
}

/////////////////////////////////////////////////////////////////////////////////////////////////