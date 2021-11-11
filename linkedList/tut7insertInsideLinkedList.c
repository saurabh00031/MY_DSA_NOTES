
#include <stdio.h>
#include<stdlib.h>



struct Node
{
    int data;
    struct Node *next;
    
}*first=NULL;



void create(int A[],int n)
{
   struct Node *t,*last;
   int i;
   
   first=(struct Node*)malloc(sizeof(struct Node));
   first->data=A[0];
   first->next=NULL;
   last=first;
   
   for(i=1;i<n;i++)
   {
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
   }
  
}



void Display(struct Node *p)
{
  while(p!=NULL) 
  {
     printf("%d\t",p->data);
     p=p->next;
     
  }
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
    int x=0;
   while(p!=NULL) 
  {
      x++;
     p=p->next;
     
  }  
  return x;

}



void addElem(struct Node *p)
{
   int sum=0;
   while(p!=NULL)
   {
       sum=sum+p->data;
       p=p->next;
   }
    printf("%d\n",sum);
}



int max(struct Node *p)
{
   int max=-32768;
   
   while(p!=NULL)
   {
      if(p->data>max)
      {
          max=p->data;
          p=p->next;
      }
      
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
    return max;
}



struct Node *SearchIn(struct Node *p,int key)
{
   
   while(p!=NULL) 
   {
       if(p->data=key)
       {
           printf("\nelem found\n");
           return p;
       }
   }
      return p;
}

struct Node *SearchRecur(struct Node *p,int key)
{
    
   if(p!=NULL) 
   {
       if(p->data=key)
       {
           printf("\nelem found\n");
           return p;
       }
       else
       {
         p=p->next;  
         SearchRecur(p,key);
       }
   }
    
    return p;
    
    
}
struct Node *improveLinearsearch(struct Node *p,int key)
{
  struct Node *q;
  
  while(p!=NULL)
  {
    if(p->data==key)
     {
      q->next=p->next;
      p->next=first;
      first=p;
      return p;
      }
      q=p;
      p=p->next;
    
  }
    
    return p;
}

void insertingIn(struct Node *p,int index,int val)
{
  int i;
  struct Node *t;
 
  if((index<0)||(index>countNode(p)))
  {
      return;
  }
     
  t=(struct Node *)malloc(sizeof(struct Node));
  t->data=val;
  
      if(index==0)
       {
       t->next=first;
       first=t;
       }
      else
      {
          for(i=0;i<index-1;i++)
          {
              p=p->next;
          }
          t->next=p->next;
          p->next=t;
      }
      
  
}


int main()
{
   int A[]={1,2,3,4,5,6,7,8};
   struct Node *temp;
   
   
   printf("Creating linked list");
   create(A,8);
   
   
   printf("Linked list displaying using iteration  \n");
   Display(first);
   printf("\n");
   printf("Linked list displaying using recursions\n");
   RecursiveDispay(first);
   
   
   printf("\nnode counter function \n");
   printf("%d\n",countNode(first));
 
 
   printf("\nsum of all elems in array\n");
   addElem(first);
   
   
   printf("\nmax elem of linked list using iteration\n");
   printf("%d\n",max(first));
   printf("\nmax elem of linked list using recursion \n");
   printf("%d\n",Recurmax(first));
   
   
   
   printf("\nlinear Search in linked list using iteration \n");
   int key;
   printf("\nenter key to search\n");
   scanf("%d",&key);
   printf("%d\n",SearchIn(first,key)->data);  //address of element found//
   
   
   printf("\nlinear search in linked list using recursion\n");
   printf("%d",SearchRecur(first,key)->data);
   
   
   printf("\nImproved linear Search \n");
   printf("%d\n",improveLinearsearch(first,key)->data);
   
   int val;
   int index;
   printf("\ninserting elem in linked list\n");
   printf("\nenter elem to insert\n");
   scanf("%d",&val);
   printf("\nenter index to insert\n");
   scanf("%d",&index);
   insertingIn(first,index,val);
   printf("Linked list displaying using iteration  \n");
   Display(first);
   
   
 
}
