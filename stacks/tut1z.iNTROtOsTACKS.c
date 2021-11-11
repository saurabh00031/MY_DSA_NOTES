
         //...........................//<stacks>//.............................//
    
    
    
    
    //stack is   -last in first out-  LIFO
    
 //    -----------------------------
 //    |
 //    | car1   car2    car3  car4    
 //    |
 //    -----------------------------
    
    //car1 first goes but it have to come out last//
    
    
    //Recursion using stacks--system stack
    //Iteration--providing stack using programing stack(manual defining)
    
    
    ///////////////////////////////////////////////////////////////////////////////
    
    //stack == abstract datatype
    
    //OPERATIONS ON STACK:-//
    
    //push-insert elem
    //pop-delete elm
    //peek  -seach elem
    //stackTop -top elem
    //isEmpty
    //isFull
    
    ///////////////////////////////////////////////////////////////////////////////
    




#include<stdio.h>
#include<stdlib.h>

struct Stack 
{
   int size;
   int Top;
   int *S;
};

void Create(struct Stack *st)
{
   printf("\nenter the stack size \n");
   scanf("%d",&st->size);
   st->Top=-1;
   
   st->S=(int *)malloc((st->size)*(sizeof(int)));
   
}

void Display(struct Stack st)
{
  int i;
  printf("\nall elements of stack \n");
  
  for(int i=st.Top;i>=0;i--)
  {
      printf("%d ",st.S[i]);
  }
  printf("\n");
}

void push(struct Stack *st,int x )
{
  
  if(st->Top==(st->size-1))  
  {
      printf("\nstack overflow \n");
  }
  else
  {
      st->Top++;
      
      st->S[st->Top]=x;
  }
    
}

int pop(struct Stack *st)
{
    
  int x=-1;
  
  if(st->Top==-1)
  {
      printf("\nStack UnderFlow\n");
  }
    
  else
  {
      x=st->S[st->Top--];
  }
    
    return x;
}

int pick(struct Stack st,int index)
{
   int x=-1;
   
   if((st.Top-index+1)<0)
   {
       printf("\nplz enter valid index\n");
   }
   x=st.S[st.Top-index+1] ;
   
   return x;
    

}

int main()
{
   
  struct Stack st;
   
    Create(&st);
  
    push(&st,10);
    push(&st,20);
    push(&st,5);
    push(&st,11);
    
    Display(st);
    
    printf("\npopped element is:%d\n",pop(&st));
    
    Display(st);
    int index;
    printf("\nenter index to pick\n");
    scanf("%d",&index);
    printf("\nelem at index %d:%d \n",index,pick(st,index));
    
    
    
    
    
    
    
    
    
    
}