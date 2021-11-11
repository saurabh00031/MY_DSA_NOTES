


//////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

void palDR(char s[],int x)
{
    
    int flag=0;
   for(int i=0;s[i]!=0;i++)
   {
       
     int k=x-i-1;
      if(s[i]==s[k])
      {
          if(k<=i)
          {
               flag=1;
               break;
          }
      }
      else
      {
          cout<<"not palindrome"<<endl;
          flag=-1;
          break;
          
      }
      
  }
   
   if(flag==1)
   {
       cout<<"Palindrome"<<endl;
   }
   else if(flag==0)
   {
       cout<<"Not palindrome"<<endl;
   }
   
  
  
}


int main()
{
   
  char s[]="saurabh";
  int x=strlen(s);
  
     palDR(s,x);
  
  
}













////////////////////////////////////////////////////////////////////////////////