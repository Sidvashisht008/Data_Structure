#include<iostream>
#include<conio.h>
using namespace std;
struct matrix
{
    int A[10];
    int n;
};
void set(struct matrix *m,int i,int j,int x)
{
    if(i==j)
    {
        m->A[i]=x;
    }
}
int get(struct matrix m,int i,int j)
{
    if(i==j)
    {
        return m.A[i];
    }
    return 0;
}
void display(struct matrix m)
{
    int i=0,j=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
                cout<<m.A[i]<<" ";
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
    set(&m,0,0,5);set(&m,1,1,8);set(&m,2,2,9);set(&m,3,3,12);
    display(m);
    getch();
    return 0;
}
