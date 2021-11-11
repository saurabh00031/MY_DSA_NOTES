
#include<bits/stdc++.h>
using namespace std;

void Substrings(string t,int i,int n,string s)  //subsets
{
    if(i==n)
    {
        cout<<t<<endl;
    }
    else
    {
        Substrings(t,i+1,n,s);
        t=t+s[i];
        Substrings(t,i+1,n,s);
    }
    
}


int main()
{
    
    
    string s;
    cin>>s;
    
    Substrings("",0,s.length(),s);
    
    
    
    
    
}