#include<iostream>
using namespace std;
int st[10],top=0,n;

void push(int v)
{
    if(top==10)
    {
        cout<<"over flow";
    }
    else
    {
        st[top]=v;
        top++;
    }

}
void pop()
{
    if(top==0)
        cout<<"under flow";
    else
    {
        top--;
    }
}
int topElement(){
    return st[top-1];
}
int main()
{
    push(3);
    push(4);
    pop();
    push(1);
    push(9);


    for(int i=top-1; i>=0; i--)
    {
        cout<<st[i]<<"\n";
    }
    cout<<"top element "<<topElement();

}