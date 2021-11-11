//<SieveOfErosthenes>//

#include<bits/stdc++.h>
using namespace std;

void Sieve(int n)
{
   bool A[n+1];
    A[0]=false;
    A[1]=false;
   
    for(int i=2;i<=n;i++)
    {
        A[i]=true;
    }
    
    for(int i=2;i*i<=n;i++)
    {
        for(int j=i*i;j<=n;j=j+i)
        {
            A[j]=false;
        }
    }
     
     for(int i=0;i<=n;i++)
    {
        cout<<i<<" "<<A[i]<<endl;
    }
   
}

int main()
{
   Sieve(20);
   cout<<endl;   
}
