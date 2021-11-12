
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//<basic binary trees>//


#include<stdio.h>
#include<stdlib.h>

struct Node *root=NULL;

struct Node
{
    struct Node *lf;
    int data;
    struct Node *rt;
};

struct Queue
{
  int size;
  int Front;
  int Rear;
  struct Node **Q;
};



void Create(struct Queue *q,int x)
{
    q->size=x;
    q->Front=0;
    q->Rear=0;
    q->Q=(struct Node **)malloc((q->size)*(sizeof(struct Node *)));
}


void enqueue(struct Queue *q,struct Node *x)
{
   if(((q->Rear+1)%(q->size))==q->Front) 
   {
       printf("Queue is full\n");
   }
   else
   {
       q->Rear=((q->Rear+1)%(q->size));
       q->Q[q->Rear]=x;
   }
}



struct Node * dequeue(struct Queue *q)
{
    struct Node * x=NULL;
    
    if(q->Front==q->Rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        q->Front=((q->Front+1)%(q->size));
        x=q->Q[q->Front];
        
    }
    
    return x;
}

int isEmpty(struct Queue q)
{
    return (q.Front==q.Rear);
}


void TreeC()
{
  struct Node *p,*t;
  int x;
  struct Queue q;
  Create(&q,100);

  printf("\nEnter the root val for givrn tree\n");
  scanf("%d",&x);
  
  root=(struct Node *)malloc((q.size)*(sizeof(struct Node )));
  root->data=x;
  
  root->lf=root->rt=NULL;
  enqueue(&q,root);
  
  
  while(!isEmpty(q))
  {
    p=dequeue(&q);
    
    printf("enter left child  of %d\n",p->data);
    scanf("%d",&x);
    
    if(x!=-1)
    {
     t=(struct Node *)malloc((q.size)*(sizeof(struct Node )));
     t->data=x;
     t->lf=t->rt=NULL;
     
     p->lf=t;
     enqueue(&q,t);
    }
      
    printf("enter right child  of %d\n",p->data);
    scanf("%d",&x);
    
    if(x!=-1)
    {
     t=(struct Node *)malloc((q.size)*(sizeof(struct Node )));
     t->data=x;
     t->lf=t->rt=NULL;
     
     p->rt=t;
     enqueue(&q,t);
    }
      
  }
  
}
 
void Pre_order(struct Node *p)
 {
    if(p)
    {
        printf("%d ",p->data);
        Pre_order(p->lf);
        Pre_order(p->rt);
    }
 }
 
void In_order(struct Node *p)
{
    if(p)
    {
       In_order(p->lf);
       printf("%d ",p->data);
       In_order(p->rt);
        
    }
}

void Post_order(struct Node *p)
{
    if(p)
    {
        Post_order(p->lf);
        Post_order(p->rt);
        printf("%d ",p->data);
        
    }
}
   
void Level_order(struct Node *root)  
{
    struct Queue q;
    Create(&q,100);
    
    printf("%d ", root->data);
    enqueue(&q,root);
    
    while(!isEmpty(q))
    {
        root=dequeue(&q);
        
        if(root->lf)
        {
            printf("%d ",root->lf->data);
            enqueue(&q,root->lf);
        }
        if(root->rt)
        {
            printf("%d ",root->rt->data);
            enqueue(&q,root->rt);
        }
    }
    
}
   
    
int main()
{
      TreeC();
      
      printf("\n//........................./Pre_Order/............................//\n");
      Pre_order(root);
      printf("\n//........................./Post_Order/...........................//\n");
      In_order(root);
      printf("\n//........................./Post_Order/...........................//\n");
      Post_order(root);
      printf("\n//........................./Level_Order/...........................//\n");
      Level_order(root);
      printf("\n//.................................................................//\n");
   
}
























///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////