//Write a program to create a Binary Search Tree of n elements and then delete an element from the tree.

#include <bits/stdc++.h>
using namespace std;

struct Bst{
    int data;
    Bst *left;
    Bst *right;
};

//Find minimum function
Bst *Findmin(Bst *root){
    while(root->left!=NULL) root = root->left;
    return root;
}

//Delete function
Bst *delete_me(Bst *root, int data){
    //here basically we are searching the node
    if(root==NULL) return root;//bb
    else if(data<root->data){//data boro or choto hobe, but soman hobe na ei approach e
        root->left = delete_me(root->left,data);//barbar call hobe root null na howa prjnto
    }
    else if(data>root->data){
        root->right = delete_me(root->right,data);
    }
    //got the value
    else{
        //1. No child
        if(root->right==NULL && root->left==NULL){
            delete root;//bb
            root = NULL;//root e ekhn kichu nai
        }
        //2. one child(left)
        else if(root->left == NULL){
            Bst *temp = root;
            root = root->right ;//want to remove the pointer to the root
            delete temp;//temp dekha######################################
        }
        else if(root->right == NULL){
            Bst *temp = root;
            root = root->left;
            delete temp;//
        }
        //3. 2 children
        else{
            Bst *temp = Findmin(root->right);
            root->data = temp->data;//want to delete the root data
            root->right = delete_me(root->right, temp->data);

        }
    }
    return root;

}

//Inorder function
void inorder(Bst *root){
    if(root ==NULL) return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

//Insert
Bst *insert(Bst *root,int data){
    if(root==NULL){
        //do something
        root = new Bst();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data>=root->data){
        root->right=insert(root->right, data);
    }
    else if(data<=root->data){
        root->left = insert(root->left, data);
    }
    return root;

}






int main(){
    /*
                11
			   / \
			  3   65
			 / \   \
			1   5   67
    */
    Bst *root = NULL;
    root = insert(root, 11);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 5);
    root = insert(root, 65);
    root = insert(root, 67);

    root = delete_me(root,65);
    cout<<"Inorder: "<<endl;
    inorder(root);


    return 0;
}

