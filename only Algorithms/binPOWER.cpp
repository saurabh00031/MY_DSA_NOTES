
//------//<Modular arithmetic-  binPower>//--------//

//(a+b)%n=((a%n)+(b%n))%n 
//(*b)%n=((a%n)*(b%n))%n;


#include<bits/stdc++.h>
using namespace std;

long long int binPower(long long int a,long long int b,long long int mod)
{
    long long int res=1;
    while(b>0)
    {
        if(b&1!=0)  //check it is odd or not
        {
        res=(res*a)%mod;
        }
        
        a=(a*a)%mod;
        b=b>>1;  // means:b/2
    }
    return res;
}


int main()
{
 
   cout<<binPower(3000,2,1000000007)<<endl;
 
 
 
 
   
}



//----------------------------------------------------------------------//
