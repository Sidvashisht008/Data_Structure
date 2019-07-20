#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char A[]="Ani@=-`?321";
    int B=0;
    for(int i=0;A[i]!='\0';i++)
    {
        if(!(A[i]>=65 &&A[i]<=90) && !(A[i]>=97 &&A[i]<=122) &&!(A[i]>=48 &&A[i]<=57))
        {
            B=B+1;
        }
        else
        {
            continue;
        }
    }
    if(B==0)
    {
        cout<<"valid";
    }
    else if(B>0)
    {
        cout<<"invalid";
    }
    getch();
    return 0;
}
