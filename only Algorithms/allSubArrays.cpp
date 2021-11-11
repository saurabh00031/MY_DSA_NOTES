#include<bits/stdc++.h>

using namespace std;

void SubArrays(int A[],int n)
{
   
  
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           for(int k=i;k<=j;k++)
           {
               cout<<A[k]<<" ";
           }
           cout<<endl;
       }
   }
   
   
   
}


int main()
{
   int A[]={1,2,3};
   
   SubArrays(A,3);
    
    
    
    
    
}
