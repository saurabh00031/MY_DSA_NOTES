

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
    printf("number of nodes\n");
    printf("\n%d\n",x);
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
  if(p) 
  {
      return countNode(p->next)+1;
  }
  else
  {
      return 0;
  }
    
    
}

int main()
{
   int A[]={1,2,3,4,5,6,7,8};
   
   create(A,8);
   
   printf("Linked list displaying\n");
   Display(first);
   
   printf("Linked list displaying using recursions\n");
   RecursiveDispay(first);
   
   printf("node counter function\n");
  // printf(countNode(first));
   
   
   
}
