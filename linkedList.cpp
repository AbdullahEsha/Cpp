#include<iostream>
#include<stdlib.h>
using namespace std;

// defining a linked list node
struct node{
    int data;
    node * next;
};

node *head = NULL;

node * createNode(int v){
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
        bool flag=false;
        node* curr = head;
        node* prev =NULL;

       while(curr->next != NULL)
        {
        if(curr->data == val)
        {
        flag=true;
        prev->next=curr->next;
        break;
        }
        prev = curr;
        curr = curr->next;
        }

        if(!flag)
        {
        if(curr->data == val)
           {
              prev->next = NULL;
              free(curr);
           }
        cout<<"Value not found"<<endl;
        }
    }
}
int searchLL(int d){
    int pos=0;
    bool flag=false;
    node *curr = head;

while(curr->next !=NULL){
   pos++;
   if(curr->data == d)
   {
       flag=true;
       cout<<"\nfound in position: "<<pos<<endl;
       break;
   }
   curr =curr->next;
   }
   if(!flag)
   {
   if(curr->data == d)
       {
        cout<<"\nfound in position: "<<(pos+1)<<endl;
        return 0;
       }
   cout<<"Not found"<<endl;
   }
}

int main(){
    head = NULL;
    int n,value,p,k;
    cout<<"Enter n: ";
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
    searchLL(p);
    cout<<"\nEnter delete value"<<endl;
    cin>>k;
    deleteNode(k);
    printLL();
    main();
}