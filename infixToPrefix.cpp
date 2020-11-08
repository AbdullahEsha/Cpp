#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int priority(char op){
    if(op == '+' ||
       op == '-')return 1;
    if(op == '/' ||
       op == '*')return 2;
    if(op == '^')return 3;
    return 0;
}

int main(){//stk.top(); stk.pop()
    stack<char> stk;
     queue<char> que;
    //infix expression
    char infix[]="(a+(b-c)*d-c/f)";

    for(int i=0; i<15; i++){
        char s=infix[i];
        /**if s is an open bracket push on stack*/
        if(s == '('){
            stk.push(s);
        }
        /**if s is a closed bracket keep popping
        until the opening bracket is found.
        add popped element in the postfix
        */
        else if(s == ')'){
           while(stk.top() !='('){
                que.push(stk.top());
                stk.pop();
              }
              stk.pop();
        }
        /**if s is an operator push s on stack.
        before pushing s, compare priority of top element
        with priority of s. if priority of top element is
        higher or equal pop and add to postfix.
        */
        else if(s == '+' ||
                s == '-' ||
                s == '/' ||
                s == '*'){
            // pop if priority >=
            while (priority(s)<=priority(stk.top()))
               {
                que.push(stk.top());
                stk.pop();
              }
            stk.push(s);
        }
        //if s is operands
        else{
            que.push(s);
        }
    }
    while (!que.empty()){
        cout<<que.front();
        que.pop();
    }
}