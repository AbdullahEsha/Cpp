#include<iostream>
#include<queue>
using namespace std;

int q[7], f = 0, r = 0, n = 0;

void enqueue (int data)
{
   q[r] = data;
   r++;
}
int dequeue()
{
    f++;
}
void display()
{
    for(int  i = f ; i < r ; i++)
    {
        cout<<q[i]<<"  ";
    }
}
 int main()
 {
     enqueue(1);
     enqueue(5);
     enqueue(6);
     enqueue(9);
     dequeue();
     dequeue();
     display();
 }