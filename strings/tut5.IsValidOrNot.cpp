
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

void validate(char *s)
{
    
  int i;
  int x=1;
  for(i=0;s[i]!=0;i++)
  {
    if((s[i]>=65)&&(s[i]<=90))
    {
        x=x;
    }
    else if((s[i]>=97)&&(s[i]<=122))
    {
       x=x; 
    }
    else if((s[i]>=48)&&(s[i]<=57))
    {
       x=x; 
    }
    else
    {
        x=2*x;  //for throwing out of condition of x==1;
        cout<<"is not validate"<<endl;
        break;
    }
  }
 if(x==1)
 {
     cout<<"is Validate"<<endl;
 }
}


int main()
{
   
  char *s="saurabh#";
  
  validate(s);
  
  
}














///////////////////////////////////////////////////////////////////////////////////////////////////////////////