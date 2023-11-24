//12. Write a program to create a Binary Search Tree of n elements and then delete an element from the tree.

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
   
    inorder(rrr->left);
    cout<<rrr->data<<endl;
    inorder(rrr->right);
}

//Find max
bst *FindMax(bst* root){
    while(root->right!=NULL) root = root->right;
    return root;
}

bst *delete_me(bst *roo,int data){
    if(roo==NULL)return roo;
    else if(roo->data>data) roo->left = delete_me(roo->left,data);
    else if(roo->data<data) roo->right = delete_me(roo->right,data);
    //found the data
    else {
        //1. no children
        if(roo->left==NULL && roo->right==NULL){
            delete roo;
            roo = NULL;
            //return roo;
        }
        //2. one children
        else if(roo->left==NULL){
            bst *tmp = roo;
            roo = roo->right;
            delete tmp;//without using temp
            
        }
        else if(roo->right==NULL){
            bst *tmp = roo;
            roo = roo->left;
            delete tmp;
        }
        //3. two children
        else{
            bst *temp = FindMax(roo->right);
			roo->data = temp->data;
			roo->right = delete_me(roo->right,temp->data);
        }
        
    }
    return roo;

}




int main(){

    bst *root = NULL;

    root = insert(root, 12);
    root = insert(root, 2);
    root = insert(root, 122);
    root = insert(root, 4);
    root = insert(root, 7);

    root = delete_me(root,4);
    root = delete_me(root,7);
    inorder(root);
    
    
    return 0;
}