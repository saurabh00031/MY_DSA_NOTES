
//o(n^2)

//..............................//<subarray with sum 0>//.....................................//   



#include<bits/stdc++.h>
using namespace std;

void checkSubArraySumZero(int A[],int n)
{
   int flag=0;
   int s=0;
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           s=s+A[j];
           if(s==0)
           {
               flag=1;
               break;
           }
       }
       if(flag==1)
       {
           break;
       }
   }
   
   if(flag==1)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}

int main()
{
    int A[]={1,2,3,-4,-5,7};
    
    checkSubArraySumZero(A,6);
  
    

}

//..............................//<subarray with sum 0>//.....................................//   



//O(n)

//..............................//<subarray with sum 0>//.....................................//   



#include<bits/stdc++.h>
using namespace std;

void checkSubArraySumZero(int A[],int n)
{
   int flag=0;
   
   unordered_map<int,int>mp;
   
   int s=0;
   
   for(int i=1;i<=n;i++)
   {
      s=s+A[i]; 
      
      if((s==0)||(mp[s]==1)||(A[i]==0))
      {
           flag=1;
           break;
         
      }
      
      else
      {
          mp[s]=1;
      }
   }
   
   if(flag==1)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}

int main()
{
    int n;
    cin>>n;
    
    int A[n+1];
    
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    
    checkSubArraySumZero(A,6);
  
    

}

//..............................//<subarray with sum 0>//.....................................//   
