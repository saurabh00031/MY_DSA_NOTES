

#upper to lower ----|
                    |----------------->convsersion in strings
#lower to upper ----|
                    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
   char s1[]="welcome";
    int i;
    int ct=0;
   
   for(i=0;s1[i]!='\0';i++)
   {
     s1[i]=s1[i]-32;
   }
   cout<<s1<<endl;
   
   char s2[]="WELCOME";
     ct=0;
   
   for(i=0;s2[i]!='\0';i++)
   {
     s2[i]=s2[i]+32;
   }
   cout<<s2<<endl;
   
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//#puper to lower and lower to upper in single string....


#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
   char s1[]="WELcome";
    int i;
    int ct=0;
   
   for(i=0;s1[i]!='\0';i++)
   {
      if((s1[i]>=65)&&(s1[i]<=90))
      {
     s1[i]=s1[i]+32;
      }
      else if((s1[i]>=97)&&(s1[i]<=122))
      {
      s1[i]=s1[i]-32;
      }
   }
   cout<<s1<<endl; 
}
   
   
//#/////////////////////////////////////////////////////////////////////////////////////////////////////////////








