
#include <iostream>
using namespace std;

struct Matrix
{
   int A[4];
   int n;
    
};

void Set(struct Matrix *m,int i,int j,int x)
{
    if(i==j)
    {
        m->A[i-1]=x;
    }
    
}
int Get(struct Matrix m,int i,int j)
{
    if(i==j)
       return m.A[i-1];
    else
       return 0;
}

void display(struct Matrix m)
{
    for(int i=0;i<m.n;i++)
    {
      for(int j=0;j<m.n;j++)   
      {
          if(i==j)
          {
              cout<<m.A[i]<<" ";
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
    m.n=4;
    
    Set(&m,1,1,10);
    Set(&m,2,2,20);
    Set(&m,3,3,30);
    Set(&m,4,4,40);
    
    cout<<Get(m,1,1)<<endl;
    display(m);
    
    
    
    
    
    
}
