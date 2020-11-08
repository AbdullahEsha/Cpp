//Heap
#include<iostream>
#include<stdlib.h>
using namespace std;

const int MAX_SIZE=100;
int Heap[MAX_SIZE+1], N=0;

void heapifyDown(int p) //delete
{
    int c;
    while(2*p <= N)
    {
        //find the smaller child's index
        c = 2*p;//index of left child
        if(c+1 <= N && Heap[c+1] < Heap[c])c=c+1;// index of smaller child

        // swap
        if(Heap[p] > Heap[c])
            swap(Heap[p], Heap[c]);
        else break;
        //change parent
        p = c;
    }
}

void heapifyUp(int c)//insert
{
    //find parent index
    int p = c/2;
    //if parent is larger do swapping
    while(p>=1)
    {
        if(Heap[p] > Heap[c])
            swap(Heap[p], Heap[c]);
        else break;
        c = p;
        p = p/2;
    }
}

void Heapify()
{
    for(int p=N/2; p>=1; p--)heapifyDown(p);
}

int insertData(int data)
{
    //implement this function
    Heap[N+1]=data;
    N++;
    heapifyUp(N+1);
}
int deleteRoot()
{
    //swap root and last element
    int r=1,le = N;
    swap(Heap[r], Heap[le]);
    /** decrease N **/
    N = N-1;
    //heapify down at root
    heapifyDown(r);
}

void sortHeap()
{
    int tmp=N;
    for(int i=0; i<tmp; i++)deleteRoot();
    cout<<"Sorted List: ";
    for(int i=1; i<=tmp; i++)cout<<Heap[i]<<" ";
    cout<<"\n\n";
    N=tmp;
    Heapify();
}

void showHeap()
{
    if(N>0)
    {
        for(int i=1; i<=N; i++)cout<<Heap[i]<<" ";
        cout<<"\n\n";
    }
    else cout<<"Heap does not exist!\n\n";
}

int main()
{
    // Build a heap with some random elements
    int value;
    cout<<"\nEnter N: ";
    cin>>N;
    for(int i=0; i <N; i++){
        Heap[i+1] = rand()%100;
    }

    cout<< "Before heapify: ";
    showHeap();
    Heapify();
    cout<< "After heapify: ";
    showHeap();

    while(1)
    {
        int choice=-1;
        cout<<"0)New\t1)Insert\t2)Delete root\t3)sort\nEnter Option: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter a value to insert: ";
            cin>>value;
            insertData(value);
            showHeap();
            break;
        case 2:
            deleteRoot();
            showHeap();
            break;
        case 3:
            sortHeap();
            showHeap();
            break;
        case 0:
            main();
        default:
            break;
        }
    }
}
