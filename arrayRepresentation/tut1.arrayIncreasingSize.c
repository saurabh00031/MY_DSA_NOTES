//#

//dyanamic arrays:-

#include <stdio.h>
#include<stdlib.h>

int main()
{
    //hiiiiii
  int *p=(int* )malloc(4*sizeof(int)) ;
  p[0]=1;
  p[1]=2;
  p[2]=3;
  p[3]=4;
  
  int *q=(int* )malloc(8*sizeof(int));
  
  for(int i=0;i<4;i++)
  {
      q[i]=p[i];  //values of p transfered into q
  }
    free(p);    //made memory free
    
    p=q;  //p is stored in q;
    q=NULL;  //q made empty
    
    p[4]=5;
    p[5]=6;
    for(int i=0;i<6;i++)
    {
        printf("%d\t",p[i]);  // previuos p is transfered into size increased p
    }
    
    
    
    
}
