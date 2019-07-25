//diagonal matrix
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5][5],i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                cin>>a[i][j];
            }
            else
            {
                a[i][j]=0;
            }
        }

    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int b[5],m=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                b[m]=a[i][j];
                m++;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    getch();
    return 0;
}
