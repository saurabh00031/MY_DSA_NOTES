#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Node
{
  int data;
  struct Node *next;
}*first=NULL;

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
    
    
    printf("\nnumber of nodes:\n%d\n",x);
   
}

void DisplayRecur(struct Node *p)
{
    if(p!=0)
    {
        printf("%d",p->data);
        printf(" ");
        p=p->next;
        
        DisplayRecur(p);
    }
   
}

void SumLink(struct Node *p)
{
    int sum=0;
    while(p!=0)
    {
        sum=sum+p->data;
        p=p->next;
    }
    
    
    printf("\nsum of elems:\n%d\n",sum);
   
}

void SumLinkRecur(struct Node *p)
{
    static int sum=0;
    
    if(p!=0)
    {
        sum=sum+p->data;
        p=p->next;
        SumLinkRecur(p);
    }
    
    printf("\nsum of elems:\n%d\n",sum);
   
}

void MaxOfLL(struct Node *p)
{
    int max=-32768;
    
    while(p!=0)
    {
    if((p->data)>max)
    {
        max=p->data;
        p=p->next;
    }
    
    }
    printf("%d",max);
    
}

int RecurMaxOfLL(struct Node *p)
{
    static int maxo=-32768;
    
    if(p!=NULL)
    {
       if(p->data>maxo) 
       {
           maxo=p->data;
           p=p->next;
           RecurMaxOfLL(p);
       }
        
       
    }
    
    return maxo;
}

void linSearch(struct Node *p,int key)
{
  
  while(p!=NULL)  
  {
     if((p->data)==key)
     {
         printf("elem found\n");
         break;
     }
      else
      {
          p=p->next;
          if(p==NULL)
           {
           printf("elem not found\n");
           }
      }
      
      
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

void RecurSearch(struct Node *p,int key)
{
  if(p!=NULL)  
  {
      if(p->data==key)
      {
          printf("elem found ");
          return;
      }
      else
      {
          p=p->next;
          RecurSearch(p,key);
          if(p==NULL)
          {
              printf("elem not found\n");
          }
      }
  }
    
    
  
}

void insertElem(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    
    if(index<0 || index>countNode(p))
    {
        return;
    }
    
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    
    if(index==0)
    {
        t->next=first;   //making first as next 
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

int DeleteLL(struct Node *p,int index)
{
    struct Node *t=NULL;
    int x=-1;
    int i;
    
    if(index<1 || index>countNode(p))
    {
        return -1;
    }
    
    if(index==1)
    {
        t=first;
        x=first->data;
        first=first->next;;
        free(t);
    }
    
    else
    {
        for(i=0;i<index-1;i++)
        {
            
            t=p;
            p=p->next;
        }
        
        t->next=p->next;
        x=p->data;
        free(p);
        return x;
        
    }

}


int main()
{
    
    int A[]={1,2,3,4,5};
    
//........................................................................

    printf("\ncreating the linked list\n");
    Create(A,5);
//.........................................................................

    printf("\ndisplaying the  linked list\n");
    Display(first);
//..........................................................................

    printf("\ndisplaying the  linked list using recursion\n");
    DisplayRecur(first);

//...........................................................................

    printf("\nsum of elems in the linked list using iteration\n");
    SumLink(first);
    
//............................................................................
 
    printf("\nsum of elems in the linked list using recursion\n");
    SumLinkRecur(first);
    
//...........................................................................
 
    printf("\nnode counter function \n");
    printf("%d\n",countNode(first));
//...........................................................................


    printf("\nmax elem in the linked list using iteration\n");
    MaxOfLL(first);
    
//..........................................................................

    printf("\nmax elem in the linked list using recursion\n");
    printf("%d", RecurMaxOfLL(first) );
    
//..........................................................................

    int key;
    printf("\nlinear search in LL\n");
    printf("enter key value to search\n");
    scanf("%d",&key);
    
    printf("\noutput->using->iteration\n");
    linSearch(first,key);
    
//...........................................................................   

    printf("\noutput->using->recursion\n");
    RecurSearch(first,key);
    
//........................................................................

    printf("inserting elem in linked list\n");
    printf("\n");
    int index,elem;
    printf("enter index to which ,elem to enter\n");
    scanf("%d",&index);
    printf("enter elem to insert\n");
    scanf("%d",&elem);
    
    insertElem(first,index,elem);
    Display(first);

//.........................................................................
    
    printf("\n Enter position which you want to delete\n");
    int pos;
    scanf("%d",&pos);
    printf("%d\n",DeleteLL(first,pos));
    Display(first);
    
//.........................................................................    
    
}


//..............................................................................................



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Node
{
  int data;
  struct Node *next;
}*first=NULL;


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

void DisplayRecur(struct Node *p)
{
    if(p!=0)
    {
        printf("%d",p->data);
        printf(" ");
        p=p->next;
        DisplayRecur(p);
    }
   
}

void SumLink(struct Node *p)
{
    int sum=0;
    
    while(p!=0)
    {
        sum=sum+p->data;
        p=p->next;
    }
    
    printf("\nsum of elems:\n%d\n",sum);
   
}

void SumLinkRecur(struct Node *p)
{
    static int sum=0;
    
    if(p!=0)
    {
        sum=sum+p->data;
        p=p->next;
        SumLinkRecur(p);
    }
    
    printf("\nsum of elems:\n%d\n",sum);
   
}

void MaxOfLL(struct Node *p)
{
    int max=-32768;
    
    while(p!=0)
    {
    if((p->data)>max)
    {
        max=p->data;
        p=p->next;
    }
    
    }
    printf("%d",max);
    
}

int RecurMaxOfLL(struct Node *p)
{
    static int maxo=-32768;
    
    if(p!=NULL)
    {
       if(p->data>maxo) 
       {
           maxo=p->data;
           p=p->next;
           RecurMaxOfLL(p);
       }
        
       
    }
    
    return maxo;
}

void linSearch(struct Node *p,int key)
{
  
  while(p!=NULL)  
  {
     if((p->data)==key)
     {
         printf("elem found\n");
         break;
     }
      else
      {
          p=p->next;
          if(p==NULL)
           {
           printf("elem not found\n");
           }
      }
      
      
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

void RecurSearch(struct Node *p,int key)
{
  if(p!=NULL)  
  {
      if(p->data==key)
      {
          printf("elem found ");
          return;
      }
      else
      {
          p=p->next;
          RecurSearch(p,key);
          if(p==NULL)
          {
              printf("elem not found\n");
          }
      }
  }
    
    
  
}

void insertElem(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    
    if(index<0 || index>countNode(p))
    {
        return;
    }
    
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    
    if(index==0)
    {
        t->next=first;   //making first as next 
        first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
            t->next=p->next;
            p->next=t;
            
        }
    }
    
}

int DeleteLL(struct Node *p,int index)
{
    struct Node *t=NULL;
    int x=-1;
    int i;
    
    if(index<1 || index>countNode(p))
    {
        return -1;
    }
    
    if(index==1)
    {
        t=first;
        x=first->data;
        first=first->next;;
        free(t);
    }
    
    else
    {
        for(i=0;i<index-1;i++)
        {
            
            t=p;
            p=p->next;
        }

        
        t->next=p->next;
        x=p->data;
        free(p);
        return x;
        
    }

}

void ReverseLL(struct Node *p,int n)
{
   int i=0;
   int arr[n];
   
   while(p!=NULL)
   {
    arr[i]=p->data;
    p=p->next;
    i++;
   }
   
   p=first;
   i--;
   
    while(p!=NULL)
   {
    p->data=arr[i];
    p=p->next;
    i--;
    
   } 
    
     while(p!=NULL)
   {
     printf("%d",p->data);
     printf(" ");
     p=p->next;
   } 
    printf("\n");
    
}

int isLOOP(struct Node *p)
{
    
    
    
    
    
    
    
    
    
    
    
}

int main()
{
    
    int A[]={1,2,3,4,5};
    
    int size=(sizeof(A)/sizeof(int));
    printf("%d",size);
   
//........................................................................

    printf("\ncreating the linked list\n");
    Create(A,5);   // A=&A[0];
//.........................................................................

    printf("\ndisplaying the  linked list\n");
    Display(first);
//..........................................................................

    printf("\ndisplaying the  linked list using recursion\n");
    DisplayRecur(first);

//...........................................................................

    printf("\nsum of elems in the linked list using iteration\n");
    SumLink(first);
    
//............................................................................
 
    printf("\nsum of elems in the linked list using recursion\n");
    SumLinkRecur(first);
    
//...........................................................................
 
    printf("\nnode counter function \n");
    printf("%d\n",countNode(first));
//...........................................................................


    printf("\nmax elem in the linked list using iteration\n");
    MaxOfLL(first);
    
//..........................................................................

    printf("\nmax elem in the linked list using recursion\n");
    printf("%d", RecurMaxOfLL(first) );
    
//..........................................................................

    int key;
    printf("\nlinear search in LL\n");
    printf("enter key value to search\n");
    scanf("%d",&key);
    
    printf("\noutput->using->iteration\n");
    linSearch(first,key);
    
//...........................................................................   

    printf("\noutput->using->recursion\n");
    RecurSearch(first,key);
    
//........................................................................

    printf("inserting elem in linked list\n");
    printf("\n");
    int index,elem;
    printf("enter index to which ,elem to enter\n");
    scanf("%d",&index);
    printf("enter elem to insert\n");
    scanf("%d",&elem);
    
    insertElem(first,index,elem);
    Display(first);

//.........................................................................
    
    printf("\n Enter position which you want to delete\n");
    int pos;
    scanf("%d",&pos);
    printf("%d\n",DeleteLL(first,pos));
    Display(first);
    
//.........................................................................    
  
    printf("Reversing the all elements in the linked list");
    
    ReverseLL(first,5);
    printf("\n");
    Display(first);
    printf("\n");
  
//.........................................................................    
 
    

//.........................................................................    
    
    
}













//.....................................................................................


