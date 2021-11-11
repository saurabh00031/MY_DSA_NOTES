

//------------------------//Euclids_Algorithm>//----------------------//

#include<bits/stdc++.h>
using namespace std;

//42 24
//24 18
//18 6


int gcd(int a,int b)    
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    
    return a;
}

int main()
{
  
  cout<<gcd(20,30)<<endl;
  
  
   
}



//----------------------------------------------------------------------//
