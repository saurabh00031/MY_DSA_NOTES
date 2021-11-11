#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos) 
{
    return ( (n & (1<<pos))!=0 );
}

int setBit(int n,int pos) 
{
    return ( (n | (1<<pos)) );
}

int clearBit(int n,int pos)
{
    return (n & ~(1<<pos));
}

int updateBit(int n,int pos,int val)
{
    n=(n & ~(1<<pos));   //first clear bit
    return ( n | (val<<pos) );   //then set bit
}



int main()
{
   
   cout<<getBit(5,2)<<endl;
   cout<<setBit(5,1)<<endl;
   cout<<clearBit(5,2)<<endl;
   cout<<updateBit(5,1,1)<<endl;
       
}
