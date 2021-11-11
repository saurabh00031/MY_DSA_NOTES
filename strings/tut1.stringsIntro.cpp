

//...............................................................................................

->character set:- 0 to 127 are ASCII code...... 7 bits  are enough as 2^7-1:-

A...to...Z          
65.....>90  

a...to...z
97....>122

0  to  97
48....>57

enter->10
spacebar->13
escape->27

->Unicodes are for all langauges ......
->ascii code will be subset of unicode...........
->unicodes takes 2 bytes that is 16 bits memory ..can be represented by hexadecimal of 4 of 4 bits

//.................................................................................................

#include<iostream>

using namespace std;

int main()
{
    
char temp;    //1 bite of memory

temp='a';
cout<<temp<<endl;
cout<<int(temp)<<endl;
}


////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main()
{
   
    
    char x[10]={'1','2','3','4'};
    
  
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<endl;
    }
    
      char xx[5]={'1','2','3'};

    for(int i=0;i<5;i++)     
    {
        cout<<xx[i]<<endl;         //remaining positions gets filled by 0
    }
    

}


/////////////////////////////////////////////////////////////////////////////////////

string terminator or string delimeter

'\0'
/////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

int main()
{
   
    char name1[10]={'j','o','h','n','\0'};    //stack
          or
    char name2[]={'j','o','h','n','\0'};  //stack
          or
    char name3[]="john";  //stack
          or
    char *name4="john";   //heap   ...dynamically allocated memory like
    
   

}

//////////////////////////////////////////////////////////////////////////////////////
