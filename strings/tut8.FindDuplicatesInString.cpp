
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>  
#include <string.h>  
 using namespace std;  
int main()  
{  
    char string[] = "Great responsibility";  
    int count;  
      
    printf("Duplicate characters in a given string: \n");  
    //Counts each character present in the string  
    for(int i = 0; i < strlen(string); i++)
     {  
        count = 1;  
        for(int j = i+1; j < strlen(string); j++) 
        {  
            if(string[i] == string[j] && string[i] != ' ') 
            {  
                count++;  
                //Set string[j] to 0 to avoid printing visited character  
                string[j] = '0';  
            }  
        }  
        //A character is considered as duplicate if count is greater than 1  
        if(count > 1 && string[i] != '0')  
            printf("%c\n", string[i]);  
    }  
   
    return 0;  




}










////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;
# define NO_OF_CHARS 256
class duplicate_char{
   public :
   void charCounter(char *str, int *count){
      int i;
      for (i = 0; *(str + i); i++)
      count[*(str + i)]++;
   }
   void printDuplicateCharacters(char *str){
      int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
      charCounter(str, count);
      int i;
      for (i = 0; i < NO_OF_CHARS; i++)
         if(count[i] > 1)
            printf("%c\t\t %d \n", i, count[i]);
      free(count);
   }
};
int main(){
   duplicate_char dupchar ;
   char str[] = "tutorialspoint";
   cout<<"The duplicate characters in the string\n";
   cout<<"character\tcount\n";
   dupchar.printDuplicateCharacters(str);
   return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
