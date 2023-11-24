//Write a program to create a Binary Search Tree of n elements and then display the elements (preorder, in order and post order) of the tree.

#include <bits/stdc++.h>
using namespace std;

struct Babu{
    int data;
    Babu *l;
    Babu *r;
};

void preorder(Babu *boo){
    if(boo == NULL) return;
    cout<<boo->data<<endl;//root -> cout
    preorder(boo->l);//left
    preorder(boo->r);//right

}


void inorder(Babu *boo){
    if(boo == NULL) return;
    inorder(boo->l);//left
    cout<<boo->data<<endl;//root -> cout
    inorder(boo->r);//right

}


void postorder(Babu *boo){
    if(boo == NULL) return;
    postorder(boo->l);//left
    postorder(boo->r);//right
    cout<<boo->data<<endl;//root -> cout
}

Babu *insert(Babu *haa, int data){
    if(haa==NULL){
        //create a node in haa
        haa = new Babu();
        //initially left and right NULL thakbe
        haa->data=data;
        haa->l = haa->r = NULL;
    }
    else if(data<haa->data){
        //right e jabe
        haa->l = insert(haa->l,data);
    }
    else if(data>haa->data){
        //left e jabe
        haa->r = insert(haa->r,data);
    }
    return haa;
}



int main(){

    Babu *root = NULL;
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 11);
    root = insert(root, 66);
    root = insert(root, 6);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    
    return 0;
}