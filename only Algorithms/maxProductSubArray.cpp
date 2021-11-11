

//<max Product SubArray>//  //o(n)-optimal approach:

#include <bits/stdc++.h>
using namespace std;

void MaxProduct(vector<int>v)
{
   int res=v[0];
   int mx=res;
   int mn=res;
  int n=v.size();
  
  for(int i=1;i<n;i++)
  {
      if(v[i]<0)
      {
          swap(mx,mn);
      }
  
  mx=max(v[i],mx*v[i]);
  mn=min(v[i],mn*v[i]);
    
  res=max(res,mx);
  
  }
  
   cout<<res<<endl;
}

int main()
{
  int n;
  cin>>n;
 // cin>>n;
  vector<int>v;
  
 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
     v.push_back(x);
 }
  
  MaxProduct(v);
 
  
  
   
}
