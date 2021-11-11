
#include<bits/stdc++.h>
using namespace std;

int mexSP(unordered_set<int>sp)
{
   int mx=0;
   
   while(sp.find(mx)!=sp.end())
   {
       mx=mx+1;
   }
    
    return mx;
    
}

int main()
{
   
   int n;
   cin>>n;
   
   int x;
   
   unordered_set<int>sp;
   
   for(int i=0;i<n;i++)
   {
       cin>>x;
       sp.insert(x);
   }
   
   
   cout<<mexSP(sp)<<endl;
   
}
