
//Linked list representation//

#include <stdio.h>
#include<stdlib.h>

struct Node 
{
    
   int data;
   struct Node *next;
    
}*Front=NULL,*Rear=NULL,*ssp=NULL;


void enq(int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
   
    if(t==NULL)
    {
        printf("Q is full\n");
    }
    else
    {
        t->data=x;
        t->next=NULL;
        if(Front==NULL)
        {
           Front=t;
           Rear=t;
        }
        else
        {
          Rear->next=t;
          Rear=t;
        }
    }
    

}

int deq()
{
    int x=-1;
    struct Node *t;
    
    if(Front==NULL)
    {
        printf("Q is empty\n");
    }
    else
    {
        x=Front->data;
        t=Front;
        Front=Front->next;
        free(t);
    }
    
    return x;
}

void Display()
{
  struct Node *p=Front;
  
  while(p!=NULL)
  {
      printf("%d ",p->data);
      p=p->next;
  }
    
    
    printf("\n");
}


int main()
{
  enq(10);
  enq(130);
  enq(60);
  enq(103);
    
    Display();
    
    printf("%d\n",deq());
     Display();
    
}


