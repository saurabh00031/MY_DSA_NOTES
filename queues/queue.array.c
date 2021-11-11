

#include<stdio.h>
#include<stdlib.h>

struct Que
{
   int size;
   int Front;
   int Rear;
   int *Q;
};

void Create(struct Que *q)
{
    printf("enter the size of Queue\n");
    scanf("%d",&q->size);
    
    q->Q=(int*)malloc((q->size)*sizeof(int));
    
    q->Front=-1;
    q->Rear=-1;
}

void enqueue(struct Que *q,int x)
{
   if(q->Rear==(q->size-1)) 
   {
       printf("Queue overflow\n");
   }
    else
    {
        q->Rear++;
        q->Q[q->Rear]=x;
    }
}

void dequeue(struct Que *q)
{
    int x=-1;
    
   if(q->Rear==q->Front) 
   {
       printf("Queue is empty\n");
   }
  else
  {
    q->Front++;
    x=q->Q[q->Front];
    
  }
    
}

void Display(struct Que q)
{
    
for(int i=q.Front+1;i<=q.Rear;i++)
{
    printf("%d ",q.Q[i]);
}
  printf("\n");
  
    
}

int main()
{
    struct Que q;
    
    Create(&q);
   
    
    enqueue(&q,20);
    enqueue(&q,10);
    enqueue(&q,1);
    Display(q);
    
    dequeue(&q);
    Display(q);
    
    
    return 0;
}