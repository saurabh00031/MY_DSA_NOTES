
//..............................<//stacks using linked list//>................................//

#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*Top=NULL;  //it is replaced with (*first=NULL)


void push(int x)
{
  struct Node *t;
  t=(struct Node *)malloc(sizeof(struct Node));
  
  if(t==NULL)
  {
      printf("\nstack overflow\n");
  }
  else
  {
      t->data=x;
      t->next=Top;
      Top=t;
  }
}

int pop()
{
    struct Node *t=NULL;
    int x=-1;
    
    if(Top==NULL)
    {
        printf("\nstack underflow\n");
    }
    else
    {
        t=Top;
        Top=Top->next;
        x=t->data;
        free(t);
    }
    
    return x;
}

void Display()
{
  struct Node *p=Top;
  
  printf("\nelements of stack\n");
  
  while(p!=NULL)
  {
      printf("%d ",p->data);
      p=p->next;
  }
    
   printf("\n");
   
}


int main()
{
   push(10);
   push(11);
   push(2);
   push(50);
   
   Display();
   
   printf("\npopped element: %d\n ",pop());
   printf("\npopped element: %d\n ",pop());
   
   Display();
   
   return 0;
   
}

//..............................<//stacks using linked list//>................................//