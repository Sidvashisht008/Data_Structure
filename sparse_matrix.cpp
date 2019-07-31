#include<iostream>
#include<conio.h>
using namespace std;
struct element
{
    int i;
    int j;
    int x;
};
struct sparse
{
    int m;
    int n;
    int num;
    struct element *e;
};
void create(struct sparse *s)
{   int i;
    cout<<"enter dimensions";
    cin>>s->m>>s->n;
    cout<<"enter no. of non zero elements";
    cin>>s->num;
    s->e=new struct element[s->num];
    cout<<"enter all non zero elements";
    for(i=0;i<s->num;i++)
    {
        cin>>s->e[i].i;
        cin>>s->e[i].j;
        cin>>s->e[i].x;
    }
}
void display(struct sparse s)
{
    int i,j,k=0;
    for(i=0;i<s.m;i++)
    {
        for(j=0;j<s.n;j++)
        {
            if(i==s.e[k].i && j==s.e[k].j)
            {
                cout<<s.e[k].x<<" ";
                k++;
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}
int main()
{
    struct sparse s;
    create(&s);
    display(s);
    return 0;
}
