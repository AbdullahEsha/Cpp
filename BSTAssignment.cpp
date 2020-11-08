#include<iostream>
#include<stdlib.h>
using namespace std;

//define a BST node
struct node{
    int data;
    node* left,*right;
};

node* root =NULL;

void insertData(int v){
    // create node
    node * newNode = new node;
    newNode->data = v;
    newNode->right = NULL;
    newNode -> left = NULL;

    // insert node
    node * parent = root;
    // find the parent where newNode will be added
    if(root == NULL){
        root = newNode;
        return;
    }
    while(true){
        cout<<"parent: "<<parent->data<<endl;
        if(parent->data > v){
            if(parent->left == NULL){
                parent->left = newNode;
                return;
            }
            parent = parent->left;
        }

        else if(parent->data < v){
            if(parent->right == NULL){
                parent->right = newNode;
                return;
            }
            parent = parent->right;
        }
        else{
            cout<<"\nDuplicated!!";
            return;
        }
    }
}


void visit_inorder(node* parent){
    if(parent != NULL){
        visit_inorder(parent->left);
        cout<<parent->data << " ";
        visit_inorder(parent->right);
    }
}


bool searchData(int val){
        node* curr = root;
        while(curr){
            if(curr->data < val){
               curr = curr->right;
            }
            else if(curr->data > val){
               curr = curr->left;
            }
            else
                return true;
        }
}

int main(){
    root = NULL;
    int n=6, item=1837,p;


    for(int i=0; i<n; i++){
        item = item+1;
        cout<<"\nitem: "<<item<<endl;;
        insertData(item);
    }

    visit_inorder(root);

    cout<<"\n\nPunch your ID to search: ";
    cin>> p;
    if (searchData(p)== true)
        cout<<"You can enter"<<endl;
    else
        cout<<"Please check your ID "<<endl;
    main();
}
