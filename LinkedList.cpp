#include<iostream>
#include<stdlib.h>
using namespace std;

// defining a linked list node
struct node{
    int data;
    node* next;
};

node* head = NULL;

node* createNode(int v){
    node* newN = new node;
    newN->data = v;
    return newN;
}

//insertion
void insertNode(node * newNode, node * prev){
 if(prev == NULL){//insertion at head
    newNode->next = head;
    head = newNode;
 }
 else{// insertion after previous
    newNode->next = prev->next;
    prev->next = newNode;
 }
}

void printLL(){
    node* curr = head;
    cout<<"\nHead: "<< (int)head<<endl;
    cout<<"\nList: ";
    while(curr != NULL){
        cout<<curr->data<<","<<(int)curr->next<<" -> ";
        curr = curr->next;
    }
    cout<<"Null";
    cout<<"\n";
}

int deleteNode(int val){
       if(head==NULL)
       {
           cout<<"list is empty"<<endl;
       }
       else if(head->data==val)
       {
           head=head->next;
       }
       else
       {
        node* curr = head;
        node* prev =NULL;

       while(curr != NULL)
        {
        if(curr->data == val)
        {
        prev->next=curr->next;
        return 0;
        }
        prev = curr;
        curr = curr->next;
        }
        return -1;
        }
}
int searchLL(int d){
    int pos=0;
    node *curr = head;

while(curr !=NULL){
   pos++;
   if(curr->data == d)
       {
       return pos;
       }
   curr =curr->next;
   }
   return -1;
}

int main(){
    head = NULL;
    int n,value,p,k;
    cout<<"\nEnter n: ";
    cin>>n;
    for(int i=0; i <n; i++){
        value = rand()%100;
        node* nn = createNode(value);
        insertNode(nn,NULL);
        cout<<value<< " Inserted!!"<<endl;
    }
    printLL();
    cout<<"\nEnter search value"<<endl;
    cin>>p;
    int pos = searchLL(p);
    if(pos == -1)
        cout<<"Not found"<<endl;
    else
        cout<<"found in position: "<<pos<<endl;

    cout<<"\nEnter delete value"<<endl;
    cin>>k;
    int d = deleteNode(k);
    if(d == -1)
        cout<<"Value not found"<<endl;
    else
        printLL();
    main();
}
