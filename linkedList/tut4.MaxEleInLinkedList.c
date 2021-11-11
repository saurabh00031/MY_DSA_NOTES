
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
      first->next=NULL;
      last=first;
   
   for(i=1;i<n;i++)
   {
      t=(struct Node *)malloc(sizeof(struct Node)); 
      t->data=A[i];
      t->next=NULL;
      last->next=t;
      last=t;
   }
   
}

void Display(struct Node *p)
{
     int x=0;
    while(p!=NULL)
    {
        
        printf("%d\t",p->data);
        p=p->next;
        x++;
        
    }
    printf("\nnumber of nodes \n ");
    printf("%d\n",x);
}

void RecursiveDispay(struct Node *p)
{
   if(p!=NULL) 
   {
       printf("%d\t",p->data);
       p=p->next;
      RecursiveDispay(p);
   }
    
}

 int countNode(struct Node *p)
{
  if(p!=NULL) 
  {
      return countNode(p->next)+1;
  }
  else
  {
      return 0;
  }
    
    
}


void addElem(struct Node *p)
{
     int sum=0;
    while(p!=NULL)
    {
        
        sum=sum+(p->data);
        p=p->next;
    }
    printf("%d\n",sum);
    
}

int max(struct Node *p)
{
   int max=-32768;  //int min
   
   while(p!=NULL)
   {
     if(p->data>max) 
     {
         max=p->data;
     }
      p=p->next; 
   }
    
    return max;
}

int Recurmax(struct Node *p)
{
    
static int max=-32768;

if(p!=NULL)
{
    if(p->data>max)
    {
        max=p->data;
        p=p->next;
        Recurmax(p);
        
    }
}
 else
 {
     return max;
 }
}


int main()
{
   int A[]={1,2,3,4,5,6,7,8};
   
   create(A,8);
   
   printf("Linked list displaying  \n");
   Display(first);
   printf("\n");
   
   printf("Linked list displaying using recursions\n");
   RecursiveDispay(first);
   
   printf("\nnode counter function \n");
   printf("%d\n",countNode(first));
  
   printf("\nsum of all elems in array\n");
   addElem(first);
   
   printf("\nmax elem of linked list\n");
   printf("%d\n",max(first));
   
   printf("\nmax elem of linked list using recursion \n");
   printf("%d\n",Recurmax(first));
   
   
}
