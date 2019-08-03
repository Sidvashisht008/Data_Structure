#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[4][4]={{1,0,0,0},{0,2,0,0},{0,0,3,0},{0,0,0,4}};
    int i,j,si=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(A[i][j]!=0)
            {
                si++;
            }
        }
    }
    int commat[si][3],k=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(A[i][j]!=0)
            {
                commat[k][0]=i;
                commat[k][1]=j;
                commat[k][2]=A[i][j];
                k++;
            }
        }
    }
    for (int i=0; i<si; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<commat[i][j]<<" ";
        }
        cout<<endl;
    }

}
