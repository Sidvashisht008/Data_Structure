#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j=0;
    char A[]="Ani@=-`?321";
    char B[sizeof(A)];
    for(i=0;A[i]!='\0';i++)
    {}
    i-=1;
    for(j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    B[j]+='\0';
    cout<<B;
    getch();
    return 0;
}
