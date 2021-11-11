

/////////////////////////////////////////////////////////////////////////////////////////////

//<doubly linked list>//

#include<stdio.h>
#include<stdlib.h>
struct Node
{
  struct Node *prev;
  int data;
  struct Node *next;
}*first=NULL;

void Create(int A[],int n)
{
    struct Node *last,*t;
    
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++)
    {
       t=(struct Node*)malloc(sizeof(struct Node));
       t->data=A[i];
       t->next=last->next;
       t->prev=last;
       last->next=t;
       last=t;
    }

}

void Display(struct Node *p)
{
    
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    
    
    
    
}

int Nodes(struct Node *p)
{
    int x=0;
    while(p!=NULL)
    {
       x++;
        p=p->next;
    }
    
    return x;

}

void insert(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    
    if(index<0 || index>Nodes(p))
    {
        return;
    }
    
    if(index==0)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=x;
        t->next=p->next;
        t->prev=p;
        p->next=t;
        
    }
    
    
}


void delete(struct Node *p,int index)
{
   struct Node *t=NULL;
   int x=-1;
   
    if(index<1 || index>Nodes(p))
    {
        return;
    }
    if(index==1)
    {
        t=first;
        first=first->next;
        first->prev=t;
        //t->next=first;
        free(t);
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            t=p;
            p=p->next;
        }
        t->next=p->next;
        p->prev=t;
        free(p);
    
    }
    
    
}

int main()
{
    
    int A[]={1,2,3,4,5,6,7,8};
    Create(A,8);
    
    Display(first);
    printf("\nnumber of nodes: %d\n",Nodes(first));
    
    insert(first,8,20);
    Display(first);
    
    printf("\n");
    delete(first,4);
    Display(first);
    
    
    
}








///////////////////////////////////////////////////////////////////////////////////////////////