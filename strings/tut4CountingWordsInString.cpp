

///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

int main()
{
   
  char s[]="harry";
  int vowel=0;
  int cons=0;
  int i;
   for(i=0;s[i]!='\0';i++)
   {
      if( (s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u') )
      {
          vowel++;
      }
      else if( (s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U') )
      {
          vowel++;
      }
      else if((s[i]=='\0')||(s[i]==' '))
      { 
          vowel=vowel;
      }
      else
      {
          cons++;
          
      }
      
      cout<<"no.of vowels:"vowel<<endl<<"other than vowels:"<<cons<<endl;
      
   }
    
    
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//#.,...space if is not of one letter..non uniform space bw two words:-

#include <iostream>

using namespace std;

int main()
{
   
  char s[]="i m learning  strings in DSA";
  
  int i;
  int word=1;
  for(i=0;s[i]!='\0';i++)
  {
    if((s[i]==' ')&&(s[i-1]!=' '))
    {
        word++;
    }
  }
  cout<<word<<endl;
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

