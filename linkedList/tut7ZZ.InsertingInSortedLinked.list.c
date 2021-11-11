#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Node
{
    
  int data;
  struct Node *next;                 //local
  
}*first=NULL,*second=NULL,*third=NULL,*first1=NULL,*second1=NULL,*third1=NULL;    //global


void Create(int A[],int n)
{
  struct Node *last,*t;
  int i,j;
  
  first=(struct Node *)malloc((sizeof(struct Node)));
  first->data=A[0];
  first->next=NULL;    
  last=first;
  
  for(i=1;i<n;i++)
  {
     t=(struct Node *)malloc((sizeof(struct Node)));
     t->data=A[i];
     t->next=NULL;
     last->next=t;
     last=t;
      
  }
    
    
}

void Display(struct Node *p)
{
     int x=0;
     
    while(p!=0)
    {
        printf("%d",p->data);
        printf(" ");
        p=p->next;
        x++;
    }
    
   printf("\n number of nodes:\n%d\n",x);
   
}

void Insert(struct Node *p,int x,int n)
{
    int flag=0;
    struct Node *f=NULL,*t,*s;
    t=(struct Node *)malloc((sizeof(struct Node)));
    t->data=x;
    while(p!=NULL)
    {
      if(x>(p->data))
      {
           f=p->next;
           
          if(x<f->data)
          {
          t->next=p->next;
          p->next=t;
          }
      }
       
       else if(x<(first->data))
       {
          t->next=first;
          first=t;
          break;
           
       }
        
        p=p->next;
        flag=1;
    }
    
  
   
}

int main()
{
    printf("\n......................................................................\n");
    int A[]={11,22,33,44,55};
    
    int size=(sizeof(A)/sizeof(int));
    printf("%d",size);
   
//........................................................................

    printf("\n......................................................................\n");
    printf("\ncreating the linked list\n");
    Create(A,5);   // A=&A[0];
    Display(first);
    
    Insert(first,23,5);
    Display(first);
    
    
}


























///////////////////////////////////////////////////////////////////////////////////////////////////////////////
