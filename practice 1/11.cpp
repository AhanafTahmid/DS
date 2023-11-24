//Write a program to create a Binary Search Tree of n elements and then search an element from the tree.

#include <bits/stdc++.h>
using namespace std;
struct bst
{
    int data;
    bst *left;
    bst *right;

};

bst *insert(bst* rr, int data){
    if(rr==NULL){
        //create a new node
        rr = new bst();
        rr->data = data;
        rr->left = rr->right = NULL;
    }
    else if(rr->data>data){
        rr->left = insert(rr->left,data);
    }
    else if(rr->data<data){
        rr->right = insert(rr->right, data);
    }
    return rr;
}


void inorder(bst *rrr){
    if(rrr==NULL) return;
    if(rrr->left!=NULL){
        inorder(rrr->left);
        cout<<rrr->data<<endl;
    }
    cout<<rrr->data<<endl;
    
    
    //inorder(rrr->left);
    //inorder(rrr->right);
}


int search(bst *tt, int data){
    if(tt==NULL){
        return false;
    }
    else if(tt->data==data){
        return true;
    }
    else if(tt->data>data){
        return search(tt->left,data);
    }
    else if(tt->data<data){
        return search(tt->right,data);
    }
    else return false;

}


int main(){

    bst *root = NULL;

    root = insert(root, 12);
    root = insert(root, 2);
    root = insert(root, 122);
    root = insert(root, 4);
    root = insert(root, 7);
    
    inorder(root);
    if(search(root,4)) cout<<1<<endl;
    else cout<<"nai"<<endl;
    
    return 0;
}