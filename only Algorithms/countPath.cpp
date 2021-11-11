//------//<Count_number_of_paths_possible_from_start_in_m*n_grid>//--------//

#include<bits/stdc++.h>
using namespace std;


int countPath(int m,int n)    
{
   if((m==1) || (n==1))
   {
       return 1;
   }
   else
   {
  return countPath(m-1,n)+countPath(m,n-1);
   }
    
}

int main()
{
 
  cout<<countPath(2,2);
   
}



//----------------------------------------------------------------------//
