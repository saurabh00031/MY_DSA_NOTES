#include<bits/stdc++.h>
using namespace std;

int main()
{
    
int a[]={1,2,3,4,5};
int n=5;
sort(a,a+5);

int ans=INT_MAX;

for(int i=0;i<n-1;i++)
{
 ans=min(ans,a[i]^a[i+1]);
}

cout<<ans<<endl;
    
}
