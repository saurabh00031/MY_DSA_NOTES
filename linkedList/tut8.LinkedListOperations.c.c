//circular linked list//

#include <stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;
   
}*first=NULL;

void create(int A[],int n)
{
   int i,j;
   struct Node *last,*t;

   first=(struct Node *)malloc(sizeof(struct Node));
   first->data=A[0];
   first->next=first;
   last=first;
   
   for(i=1;i<n;i++)
   {
      t=(struct Node *)malloc(sizeof(struct Node)); 
      t->data=A[i];
      t->next=last->next;
      last->next=t;
      last=t;
   }
   
}


void DisplayRecur(struct Node *p)
{
    static int flag=0;
    
    if((p!=first)||(flag==0))
    {
        flag=1;
        printf("%d ",p->data);
        p=p->next;
        DisplayRecur(p);
    }
   
            flag=0;
}

void Display(struct Node *p)
{
  do
  {
     printf("%d ",p->data);
     p=p->next;
  }
  while(p!=first);
  
  printf("\n");
}


int main()
{
   int A[]={1,2,3,4,5,6,7,8};
   
   create(A,8);
   
   printf("Linked list displaying using iteration\n");
   Display(first);
   
   printf("Linked list displaying using recursion\n");
   DisplayRecur(first);
   
   
   
   
   
}
