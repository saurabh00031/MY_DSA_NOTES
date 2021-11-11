


//------------------------//<Tower_OF_Hanoi>//----------------------//

#include <iostream>
using namespace std;

void TWH(int n,string beg,string end,string aux)
{
   if(n==1) 
   {
       cout<<beg<<"->"<<end<<endl;
   }
   else
   {
       TWH(n-1,beg,aux,end);
       cout<<beg<<"->"<<end<<endl;
       TWH(n-1,aux,end,beg);
   }
    
    
    
}

int main()
{
    
    TWH(3,"A","C","B");   //beg end aux as parameters//
}


//----------------------------------------------------------------------//
