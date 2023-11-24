#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
void inorder(Node *nn){
    if(nn==NULL) return;
    inorder(nn->left);
    cout<< nn-> data <<endl;
    inorder(nn->right);
}
//create a node type function for inserting elements
Node *insert(Node *nn,int data){
    if(nn==NULL){
        //create new node
        nn = new Node();
        nn->data = data;
        nn->left = nn->right = NULL;
    }
    else if(data>nn->data){
        nn->right = insert(nn->right, data);
    }
    else if(data<nn->data){
        nn->left = insert(nn->left, data);
    }
    return nn;

}

int main(){

    Node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 11);
    root = insert(root, 66);
    root = insert(root, 6);

    inorder(root);
     
    return 0;
}