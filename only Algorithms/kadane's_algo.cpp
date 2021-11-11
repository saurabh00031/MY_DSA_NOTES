

/////////////////////////////////////////////////////////////////////////////////////////

//<kadane's algorithm>//

#include<bits/stdc++.h>
using namespace std;

void MaxSubArraysSum(int A[],int n)
{
   int mxS=0;
   int crS=0;
   
   for(int i=0;i<n;i++)
   {
       crS=crS+A[i];
       
       if(crS>mxS)
       {
           mxS=crS;
       }
       else if(crS<0)
       {
           crS=0;
       }
   }
  
   cout<<mxS<<endl;
   
}


int main()
{
   int A[]={1,-2,3}; 
   MaxSubArraysSum(A,3);   
}


/////////////////////////////////////////////////////////////////////////////////////////