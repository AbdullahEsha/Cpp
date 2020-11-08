#include<iostream>
#include<string.h>
using namespace std;
int *er;
int i,l,u;
void array_input(int *c)
{
    cout<<"Insert how many Element you will input"<<endl;
    cin>>l;
    cout<<"Input array"<<endl;
     for(i=0;i<=l-1;i++)
    {
        cin>>c[i];
    }


}
void array_output(int *d)
{
    cout<<"Array output"<<endl;
    for(i=0;i<=l-1;i++)
    {
        cout<<d[i]<<"  ";
    }
    cout<<endl;

}
void print_reverse(int *c)
{
    for(i=l-1;i>=0;i--)
    {
        cout<<c[i]<<"  ";
    }
    cout<<endl;

}
void insert_end(int *c)
{

    cout<<"Insert at end"<<endl;
    cin>>u;
    l++;
    c[l-1]=u;
}
void insert_position(int *c)
{
    int pos;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    cout<<"Enter the number at pos"<<endl;
    cin>>u;

    for(i=l-1;i>=pos;i--)
    {
        c[i+1]=c[i];
    }
    c[pos]=u;
    l++;
}
void delete_end(int *c)
{
    c[l]=NULL;
    l--;
}
void delete_position(int *c)
{
    int pos;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    for(i=pos;i<=l;i++)
    {
        c[i]=c[i+1];
    }
    l--;
}
void delete_position(int *c,int pos)
{
    for(i=pos;i<=l;i++)
    {
        c[i]=c[i+1];
    }
    l--;
}
void delete_x(int *c)
{
    int x;
    cout<<"Enter the number you want to delete"<<endl;
    cin>>x;

    for(i=0;i<=l;i++)
    {
        if(c[i]==x)
        {
            delete_position(c,i);
        }
    }
}
void highest_lowest(int *c)
{
    int high,low;
    high=c[0];
    low=c[0];
    for(i=0;i<=l-1;i++)
    {
        if(c[i]>high)
        {
            high=c[i];
        }
        if(c[i]<low)
        {
            low=c[i];
        }

    }
    cout<<"HIGHEST"<<high<<"   LOWEST"<<low<<endl;
}
void count_data()
{
    cout<<"Total Data "<<l<<endl;
}
void search_x(int *c)
{
    cout<<"Enter searched Data "<<endl;
    cin>>u;
    for(i=0;i<=l;i++)
    {
        if(c[i]==u)
        {
            cout<<"Index is "<<i<<endl;;
        }
    }
}
int main()
{
    cout<<"INSERT NUMBER OF SIZE, ONCE YOU SELECT IT CAN'T BE CHANGED SO BE CAREFUL"<<endl;
    int n,i,k;
    cin>>n;
    int a[n];


    while(k!=12)
    {
        cout<<"PRESS 1 TO INPUT"<<endl<<"Press 2 to output"<<endl<<"Press 3 to reverse"<<endl<<"Press 4 to insert at end"<<endl<<"Press 5 to insert at position"<<endl<<"Press 6 to delete end"<<endl<<"Press 7 to delete at position"<<endl<<"Press 8 to delete a value"<<endl<<"Press 9 to highest lowest"<<endl<<"Press 10 to count data"<<endl<<"Press 11 to search index"<<endl<<"Press 12 to exit"<<endl;
        cin>>k;
        switch(k)
    {
        case 1:array_input(a);
        break;
        case 2:array_output(a);
        break;
        case 3: print_reverse(a);
        break;
        case 4: insert_end(a);
        break;
        case 5:insert_position(a);
        break;
        case 6: delete_end(a);
        break;
        case 7: delete_position(a);
        break;
        case 8:delete_x(a);
        break;
        case 9:highest_lowest(a);
        break;
        case 10:count_data();
        break;
        case 11: search_x(a);
        break;
        case 12: k=12;

    }
    }
}