

//..............................//<rain water problem>//.....................................//   

//paani kitna jam jayega buidlings ke bich mein//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
  int n;
  cin>>n;
  
  int A[n];
  
  for(int i=0;i<n;i++)
  {
      cin>>A[i];
  }
    
  int lf[n],rt[n];
  
  lf[0]=A[0];
  
  for(int i=1;i<n;i++)
  {
      lf[i]=max(A[i],lf[i-1]);
  }
  
    
  rt[n-1]=A[n-1];
  
  for(int i=n-2;i>=0;i--)
  {
      rt[i]=max(A[i],rt[i+1]);
  }
   
   
   int res=0;
   
   for(int i=0;i<n;i++)
   {
       res=res+min(lf[i],rt[i])-A[i];
   }
    
    
    cout<<res<<endl;
    
    
    
    
    
    
    
    
}

//..............................//<rain water problem>//.....................................//   
