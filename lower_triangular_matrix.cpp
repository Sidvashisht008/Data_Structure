#include <iostream>
using namespace std;
struct matrix
{
    int *A;
    int n;
};
void set(struct matrix *m,int i,int j,int x)
{
    if(i>=j)
    {
        m->A[i*(i-1)/2+j-1]=x;
    }
}
void get(struct matrix *m,int i,int j)
{
    if(i>=j)
    {
        cout<<m->A[i*(i-1)/2+j-1];
    }
    else
    {
        cout<<"0 ";
    }
}
void display(struct matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            if(i>=j)
            {
                cout<<m.A[i*(i-1)/2+j-1]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    struct matrix m;
    cout<<"dimension of matrix";
    cin>>m.n;
    m.A=new int(m.n*(m.n+1)/2);
    int i,j,x;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            cin>>x;
            set(&m,i,j,x);
        }
    }
    display(m);
    return 0;
}
