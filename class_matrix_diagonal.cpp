#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
    int A[10];
    int n;
    public:
        matrix(int n)
        {
            this->n=n;
        }
        void display()
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j)
                    {
                        cout<<A[i]<<" ";
                    }
                    else
                    {
                        cout<<"0 ";
                    }
                }
                cout<<endl;
            }
        }
        void set(int a,int b,int x)
        {
            if(a==b)
            {
                A[a]=x;
            }
            else
            {
                A[a]=0;
            }
        }
        void get(int a,int b)
        {
            if(a==b)
            {
                cout<<A[a]<<endl;
            }
            else
            {
                cout<<"0 "<<endl;
            }
        }
};
int main()
{
    class matrix m(4);
    m.set(0,0,1);m.set(1,1,2);m.set(2,2,3);m.set(3,3,4);
    m.display();
    m.get(1,2);
    m.get(3,3);
    getch();
    return 0;
}
