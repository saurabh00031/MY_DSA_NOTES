
//without dp

//arr[]= 2 3 7 8 10
//sum =11

#include<bits/stdc++.h>
using namespace std;

void SubsetSum(int a[],int n,int x)
{
    
     int flag=0;
    
     
    for(int i=0;i<(1<<n);i++)
    {
         int sum=0;
         
       for(int j=0;j<n;j++) 
       {
           if(i&(1<<j))
           {
               sum=sum+a[j];
           }
       }
       
      if(sum==x)
       {
           cout<<"YES"<<endl;
           flag=1;
           break;
       }
       else
       {
          continue;
       }
    
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
   
}


int main()
{
    int a[]={2,3,7,8,10};
    int x=16;
    SubsetSum(a,5,x);
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//with dp:-

