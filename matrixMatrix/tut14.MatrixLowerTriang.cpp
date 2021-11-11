
#include <iostream>
using namespace std;

struct Matrix
{
   int *A;
   int n;
    
};

void Set(struct Matrix *m,int i,int j,int x)
{
    if(i>=j)
    {
       m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
    }
    
}
int Get(struct Matrix m,int i,int j)
{
    if(i>=j)
         m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j];
      
    else
       return 0;
}

void display(struct Matrix m)
{
    for(int i=0;i<m.n;i++)
    {
      for(int j=0;j<m.n;j++)   
      {
          if(i>=j)
          {
               cout<<m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j]<<" " ;
          }
          else
          {
             cout<<"0"<<" ";
          }
      }
        cout<<endl;
    }
 
    
    
}


int main()
{
    
    struct Matrix m;
    
    cin>>m.n;
    
    m.A=(int*)malloc( (m.n*(m.n+1)/2 )*(sizeof(int))  ) ;
    
    for(int i=0;i<m.n;i++)
    {
      for(int j=0;j<m.n;j++)   
      {
        int x;
        cin>>x;
        Set(&m,i,j,x);
          
      }
        
    }
 
    
    
    
    
    
}
