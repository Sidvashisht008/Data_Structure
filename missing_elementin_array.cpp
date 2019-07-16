#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=0;
    int A[9]={1,2,3,4,5,7,9,10};
    int B[10]={1,0,0,0,0,0,0,0,0,0};
    for(i=0;i<8;i++)
    {
        B[A[i]]=1;
    }
    for(i=0;i<10;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<11;i++)
    {
        if(B[i]==0)
        {
            cout<<i<<" ";
        }
    }
    getch();
    return 0;
}
