
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include <bits/stdc++.h>
using namespace std;

void reverse(char s[],int x)
{
    char t[x];
    
   for(int i=0;s[i]!=0;i++)
   {
      t[i]=s[x-i-1];
      
   }
   
   cout<<t<<endl;
  
}

int main()
{
   
  char s[]="saurabh";
  int x=strlen(s);
  reverse(s,x);
  
  
}







//////////////////////////////////////////////////////////////////////////////////////////////////////