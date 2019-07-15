#include<iostream>
#include<conio.h>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
//-------------------------------------------------------------------------
void display(struct Array *s)
{
    for(int i=0;i<s->length;i++)
    {
        cout<<s->A[i]<<" ";

    }
    cout<<endl;
}
//--------------------------------------------------------------------------


void insert(struct Array *s,int index,int b)
{
    if(s->size==s->length)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        for(int i=s->length-1;i>=index;i--)
        {
            s->A[i+1]=s->A[i];
        }
        s->A[index]=b;
        s->length++;
    }
}
//-------------------------------------------------------------------------


void add(struct Array *s,int b)
{
    if(s->length==s->size)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        s->A[s->length]=b;
        s->length++;
    }
}
void del(struct Array *s,int index)
{
    for(int i=index;i<s->length-1;i++)
    {
        s->A[i]=s->A[i+1];
    }
    s->length--;
}

int lsearch(struct Array *s,int value)
{
    int i;
    for(i=0;i<s->length;i++)
    {
        if(value==s->A[i])
        {
            return i;
        }
    }
    return -1;

}
//---------------------------------------------------------------------------

void swap(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int bsearch(struct Array *s,int value)
{
    int mid,end1,beg=0;
    end1=s->length-1;
    while (beg<=end1)
    {   mid=(beg+end1)/2;
        if(s->A[mid]==value)
        {
            return mid;
        }
        else if(s->A[mid]>value)
        {
            end1=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    return -1;

}

//----------------------------------------------------------------------------

void get(struct Array s,int index)
{
    if(index>=0 && index<s.length)
    {
        cout<<"the value at index is"<<s.A[index]<<endl;
    }
    else
    {
        cout<<"invalid index";
    }
}

//------------------------------------------------------------------------------

void set(struct Array *s,int index,int x)
{
    if(index>=0 && index<=s->length)
    {
        s->A[index]=x;
    }
    else
    {
        cout<<"invalid index"<<endl;
    }
}

//---------------------------------------------------------------------------
void max(struct Array *s)
{
    int max=s->A[0];
    for(int i=1;i<s->length;i++)
    {
        if(s->A[i]>max)
        {
            max=s->A[i];
        }
    }
    cout<<max<<endl;
}

//----------------------------------------------------------------------------

void min(struct Array*s)
{
    int min=s->A[0];
    for(int i=1;i<s->length;i++)
    {
        if(s->A[i]<min)
        {
            min=s->A[i];
        }
    }
    cout<<min<<endl;
}
//-----------------------------------------------------------------------------

void sum(struct Array *s)
{
    int total=0;
    for(int i=0;i<s->length;i++)
    {
        total=total+s->A[i];
    }
    cout<<total<<endl;
}
//------------------------------------------------------------------------------

void avg(struct Array *s)
{
    int total=0;
    for(int i=0;i<s->length;i++)
    {
        total=total+s->A[i];
    }
    cout<<total/s->length<<endl;
}

int main()
{
    struct Array arr;
    cout<<"Enter size of array";
    cin>>arr.size;
    arr.A=new int[arr.size];
    arr.length=0;
    int n,i;
    cout<<"enter how many no.";
    cin>>n;
    cout<<"enter all elements";
    for(i=0;i<n;i++)
    {
        cin>>arr.A[i];
        ++arr.length;
    }
    cout<<arr.length<<endl;
    add(&arr,10);
    display(&arr);
    insert(&arr,2,10);
    display(&arr);
    del(&arr,5);
    display(&arr);
    cout<<lsearch(&arr,5);
    cout<<lsearch(&arr,6);
    cout<<bsearch(&arr,6);
    get(arr,4);
    set(&arr,50,20);
    display(&arr);
    max(&arr);
    min(&arr);
    sum(&arr);
    avg(&arr);
    getch();
    return 0;
}
