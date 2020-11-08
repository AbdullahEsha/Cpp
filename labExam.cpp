#include<iostream>
using namespace std;
#define MAX 10
int top = 0;
char stk[MAX];

bool isEmpty()
{
    if(/*WRITE THE EXPRESSION HERE*/top==0)
        return true;
    else
        return false;
}

bool isFull()
{
    if(/*WRITE THE EXPRESSION HERE*/ top==MAX)
        return true;
    else
        return false;
}

void push(char c)
{
    if(/*CALL THE FUNCTION HERE*/top==MAX )
    {
        cout<< "Stack is full. Push unsuccessful!\n";
    }
    else
    {
        /*COMPLETE THE CODE HERE*/
        stk[top]=c;
        top++;
    }
}

void pop()
{
    if(isEmpty())
    {
        cout<< "Stack is empty. Pop unsuccessful!\n";
    }
    else
    {
        /*COMPLETE THE CODE HERE*/
        top--;
    }
}

char topElement()
{
    if(/*CALL THE FUNCTION HERE*/top==0)
    {
        cout<< "Stack is empty!\n";
    }
    else
    {
        /*COMPLETE THE CODE HERE*/
      return stk[top-1];
    }
}

int main()
{
    string s;
    cout<< "\n\nType a string: ";
    cin>>s;

    int i = 0;
    while(s[i] != '\0')
    {
        push(s[i]);
        i++;
    }


    cout<< "Reverse: ";
    while(!isEmpty())
    {
        cout<<  /*COMPLETE THE CODE HERE*/ topElement();
        pop();
    }
    main();
}
