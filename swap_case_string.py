#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char A[]="Eminem MAN";
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]>64 && A[i]<=90)
        {
            A[i]+=32;
        }
        else if(A[i]>='a' && A[i]<='z')
        {
            A[i]-=32;
        }
    }
    cout<<A;
    getch();
    return 0;
}
