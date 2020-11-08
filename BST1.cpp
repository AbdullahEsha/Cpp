#include<iostream>
#include<stdlib.h>
using namespace std;

//define a BST node
struct node{
    int data;
    node *left, *right;
};

node *root =NULL;

void insertData(int v){
    // create node
    node *newNode = new node;
    newNode->data = v;
    newNode->right = NULL;
    newNode -> left = NULL;

    // insert node
    node *parent = root;
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

void deleteData(int v){
    // find location of v (curr)
    node* curr = root, *parent = NULL;
    while(true){
        if(curr->data < v){
            parent = curr;
            curr = curr->right;
        }
        else if(curr->data > v){
            parent = curr;
            curr = curr->left;
        }
        else break;
    }
    // check case 1 , 2 , 3
    //case 1: node with 0 child
    if(curr->left == NULL && curr->right == NULL){
        if(parent->right == curr)
            parent->right =NULL;
        else
            parent-> left = NULL;
    }
    //case 3: node with two children
    if(curr->left != NULL && curr->right != NULL){
        //find maximum from left subTree
        node* temp = curr->left;
        int max_value = temp->data;
        //go to right only using while loop
        while(temp != NULL)
        {
            max_value = temp->data;
            temp = temp->right;
        }
        //replace
        deleteData(max_value);
        curr->data = max_value;
    }
    //case 2:  node with one child
    if(curr->left != NULL || curr->right != NULL){
        if(parent->right == curr)
        {
            if(curr->left == NULL)
                parent->right = curr->right;
            else
                parent->right = curr->left;
        }
        else
        {
            if(curr->left == NULL)
                parent->left = curr->right;
            else
                parent->left = curr->left;
        }
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
    int n, item,p;
    cout<<"\n\nEnter n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        item = rand()%100;
        cout<<"\nitem: "<<item<<endl;;
        insertData(item);
    }

    visit_inorder(root);

    cout<<"\n\nEnter a number to search: ";
    cin>> p;
    if (searchData(p)== true)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;

    cout<<"\n\nEnter a number to delete: ";
    cin>> item;
    // check all three cases
    deleteData(item);
    visit_inorder(root);

    main();
}
