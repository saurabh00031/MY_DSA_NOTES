#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Node
{
  int data;
  struct Node *next;                 //local
  
  
}*first=NULL,*second=NULL,*third=NULL;    //global


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
    
    if(p==NULL)
    {
    printf("\nsum of elems:\n%d\n",sum);
    }
   
}

void SumLinkRecur(struct Node *p)
{
    static int sum=0;
    
    if(p!=NULL)
    {
        sum=sum+p->data;
        p=p->next;
         
          if(p==NULL)
           {
          printf("\nsum of elems:\n%d\n",sum);
           }
    
        SumLinkRecur(p);
    }
   

   
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
    printf("max is :%d",max);
    
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

void Create2(int A[],int n)
{
  struct Node *last,*t;
  int i,j;
  
  second=(struct Node *)malloc((sizeof(struct Node)));
  second->data=A[0];
  second->next=NULL;    
  last=second;
  
  for(i=1;i<n;i++)
  {
     t=(struct Node *)malloc((sizeof(struct Node)));
     t->data=A[i];
     t->next=NULL;
     last->next=t;
     last=t;
      
  }
    
    
}

void ConcLL(struct Node *p,struct Node *t)
{
    
    third=p;
    
    while((p->next)!=NULL)
    {
        p=p->next;
    }
        p->next=t;
       
}

int main()
{
    printf("\n......................................................................\n");
    int A[]={1,2,3,4,5};
    
    int size=(sizeof(A)/sizeof(int));
    printf("%d",size);
   
//........................................................................

    printf("\n......................................................................\n");
    printf("\ncreating the linked list\n");
    Create(A,5);   // A=&A[0];
//.........................................................................

    printf("\n......................................................................\n");
    printf("\ndisplaying the  linked list\n");
    Display(first);
//..........................................................................

    printf("\n......................................................................\n");
    printf("\ndisplaying the  linked list using recursion\n");
    DisplayRecur(first);

//...........................................................................

    printf("\n......................................................................\n");
    printf("\nsum of elems in the linked list using iteration\n");
    SumLink(first);
    
//............................................................................

    printf("\n......................................................................\n");
    printf("\nsum of elems in the linked list using recursion\n");
    SumLinkRecur(first);
    
//...........................................................................

    printf("\n......................................................................\n");
    printf("\nnode counter function \n");
    printf("%d\n",countNode(first));
//...........................................................................

    printf("\n......................................................................\n");
    printf("\nmax elem in the linked list using iteration\n");
    MaxOfLL(first);
    
//..........................................................................

    printf("\n......................................................................\n");
    printf("\nmax elem in the linked list using recursion\n");
    printf("%d", RecurMaxOfLL(first) );
    
//..........................................................................

    printf("\n......................................................................\n");
    int key;
    printf("\nlinear search in LL\n");
    printf("enter key value to search\n");
    scanf("%d",&key);
    
    printf("\n......................................................................\n");
    printf("\noutput->using->iteration\n");
    linSearch(first,key);
    
//...........................................................................   

    printf("\n......................................................................\n");
    printf("\noutput->using->recursion\n");
    RecurSearch(first,key);
    
//........................................................................

    printf("\n......................................................................\n");
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

    printf("\n......................................................................\n");
    printf("\n Enter position which you want to delete\n");
    int pos;
    scanf("%d",&pos);
    printf("%d\n",DeleteLL(first,pos));
    Display(first);
    
//.........................................................................    
  
    printf("\n......................................................................\n");
    printf("Reversing the all elements in the linked list");
    ReverseLL(first,5);
    printf("\n");
    Display(first);
    printf("\n");
    ReverseLL(first,5);
//.........................................................................    

    printf("\n......................................................................\n");
    int B[]={11,22,33,44,55};
    printf("\ncreating 2nd linked list\n");
    Create2(B,5);
    Display(second);
  
    ConcLL(first,second);
    Display(third);
  
//.........................................................................    






//.........................................................................    
    
    
    
    
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




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
    
    if(p==NULL)
    {
    printf("\nsum of elems:\n%d\n",sum);
    }
   
}

void SumLinkRecur(struct Node *p)
{
    static int sum=0;
    
    if(p!=NULL)
    {
        sum=sum+p->data;
        p=p->next;
         
          if(p==NULL)
           {
          printf("\nsum of elems:\n%d\n",sum);
           }
    
        SumLinkRecur(p);
    }
   

   
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
    printf("max is :%d",max);
    
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

void Create2(int A[],int n)
{
  struct Node *last,*t;
  int i,j;
  
  second=(struct Node *)malloc((sizeof(struct Node)));
  second->data=A[0];
  second->next=NULL;    
  last=second;
  
  for(i=1;i<n;i++)
  {
     t=(struct Node *)malloc((sizeof(struct Node)));
     t->data=A[i];
     t->next=NULL;
     last->next=t;
     last=t;
      
  }
    
    
}

void ConcLL(struct Node *p,struct Node *t)
{
    
    third=p;
    
    while((p->next)!=NULL)
    {
        p=p->next;
    }
        p->next=t;
    
    
}

void MergeLL(struct Node *p,struct Node *t)
{
    struct Node *last;
    
    if(p->data < t->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else
    {
        third=last=t;
        t=t->next;
        third->next=NULL;
    }
    
    
   while(p && t) 
   {
       
       if(p->data < t->data)
       {
           last->next=p;
           last=p;
           p=p->next;
           last->next=NULL;
       }
      else
      {
           last->next=t;
           last=t;
           t=t->next;
           last->next=NULL; 
      }
   }
    
    if(p!=NULL)
    {
      last->next=p;  
    }
    if(t!=NULL)
    {
      last->next=t;
    }
}

int main()
{
    printf("\n......................................................................\n");
    int A[]={1,2,3,4,5};
    
    int size=(sizeof(A)/sizeof(int));
    printf("%d",size);
   
//........................................................................

    printf("\n......................................................................\n");
    printf("\ncreating the linked list\n");
    Create(A,5);   // A=&A[0];
//.........................................................................

    printf("\n......................................................................\n");
    printf("\ndisplaying the  linked list\n");
    Display(first);
//..........................................................................

    printf("\n......................................................................\n");
    printf("\ndisplaying the  linked list using recursion\n");
    DisplayRecur(first);

//...........................................................................

    printf("\n......................................................................\n");
    printf("\nsum of elems in the linked list using iteration\n");
    SumLink(first);
    
//............................................................................

    printf("\n......................................................................\n");
    printf("\nsum of elems in the linked list using recursion\n");
    SumLinkRecur(first);
    
//...........................................................................

    printf("\n......................................................................\n");
    printf("\nnode counter function \n");
    printf("%d\n",countNode(first));
//...........................................................................

    printf("\n......................................................................\n");
    printf("\nmax elem in the linked list using iteration\n");
    MaxOfLL(first);
    
//..........................................................................

    printf("\n......................................................................\n");
    printf("\nmax elem in the linked list using recursion\n");
    printf("%d", RecurMaxOfLL(first) );
    
//..........................................................................

    printf("\n......................................................................\n");
    int key;
    printf("\nlinear search in LL\n");
    printf("enter key value to search\n");
    scanf("%d",&key);
    
    printf("\n......................................................................\n");
    printf("\noutput->using->iteration\n");
    linSearch(first,key);
    
//...........................................................................   

    printf("\n......................................................................\n");
    printf("\noutput->using->recursion\n");
    RecurSearch(first,key);
    
//........................................................................

    printf("\n......................................................................\n");
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

    printf("\n......................................................................\n");
    printf("\n Enter position which you want to delete\n");
    int pos;
    scanf("%d",&pos);
    printf("%d\n",DeleteLL(first,pos));
    Display(first);
    
//.........................................................................    
  
    printf("\n......................................................................\n");
    printf("Reversing the all elements in the linked list");
    ReverseLL(first,5);
    printf("\n");
    Display(first);
    printf("\n");
    ReverseLL(first,5);
//.........................................................................    

    printf("\n......................................................................\n");
    int B[]={11,22,33,44,55};
    printf("\ncreating and displaying 2nd linked list\n");
    Create2(B,5);
    Display(second);
//.........................................................................    
    
    first1=first;
    second1=second;
    third1=third;
   
    printf("\n......................................................................\n");
    printf("\nconcatenated linked list :first and then second:-\n");
    ConcLL(first,second);
    Display(third);
//.........................................................................    

    
    printf("\n......................................................................\n");
    first=first1;
    second=second1;
    third=third1;
   
//.........................................................................    

  printf("\n.........checking merging of linked lists............\n");
  int x[]={1,2,3,4,5};
  int y[]={111,222,333,444,555};
  
  printf("\n......................................................................\n");
  printf("\n....merging of linked list......\n");
  Create(x,5);
  Create2(y,5);
  MergeLL(first,second);
  Display(third);   




//.........................................................................    
    
    
    
    
}


























///////////////////////////////////////////////////////////////////////////////////////////////////////////////
