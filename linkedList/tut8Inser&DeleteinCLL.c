
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
   first->next=first;    //it was NULL here in LL
   last=first;
   
   for(i=1;i<n;i++)
   {
      t=(struct Node *)malloc(sizeof(struct Node)); 
      t->data=A[i];
      t->next=last->next; //it was NULL here in LL
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

void insertLL(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;
 
 if(index==0)
 {
     t=(struct Node *)malloc(sizeof(struct Node));
     t->data=x;
     if(first==NULL)   //checking whther first node is null or not
     {
        first=t;    
        first->next=first;
     }
     else
     {
         while(p->next!=first)     //iterating to get last node so as to point
        {                          //first node as it is circular linked list
            p=p->next;
        }
        
        p->next=t;                //last ka next ko naye node ka address dena
        t->next=first;
        first=t;
     }
 }  
    else
    {
        
           for(i=0;i<index-1;i++) 
           {
               p=p->next;
           }
           
         t=(struct Node *)malloc(sizeof(struct Node));    
         t->data=x;  
         t->next=p->next;      
         p->next=t;
            
            
    }
    
 }
    
 
 int DeleteLL(struct Node *p,int index)  
 {
     int x=-1;
     int i;
     struct Node *q=NULL;
     
     if(index==0)
     {
        while(p->next!=first) 
        {
            p=p->next;
        }
         
        x=first->data; 
        
        if(first==p)
        {
            free(first);
            first=NULL;
        }
        else
        {
           p->next=first->next;
           free(first);
           first=p->next;
            
        }
     }
     else
     {
        for(i=0;i<index-1;i++) 
        {
          p=p->next;
        }
        
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
         
         
     }
     return x;
     
 }
    
    


int main()
{
   int A[]={1,2,3,4,5,6,7,8};
   
   create(A,8);
   
   printf("\nLinked list displaying using iteration\n");
   Display(first);
   
   printf("\nLinked list displaying using recursion\n");
   DisplayRecur(first);
   
   
  insertLL(first,4,20);
  
  printf("\nLinked list displaying after insertion\n"); 
  DisplayRecur(first);
   
  printf("\nLinked list element deletion\n");
  DeleteLL(first,3);
  DisplayRecur(first); 
}




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////