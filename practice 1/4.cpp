#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

//inserting
Node *insert(Node *&hh,int data){
    if(hh==NULL){
        hh = new Node();
        hh->data = data;
        hh->next = NULL;
    }
    else{
        //keep the copy of the node in a node
        Node *cc = hh;

        while(cc->next!=NULL){
            //keep the copy of the node
            cc = cc->next;
        }

        Node *to_copyy = new Node();
        to_copyy->data = data;
        to_copyy->next = NULL;
        //linking with the node

        cc->next = to_copyy;
    }
    return hh;
}

//display
void display(Node *no){
    if(no == NULL) return;
    cout<<no->data<<" ";
    display(no->next);
}

int main(){
    Node *ccccc = NULL;
    insert(ccccc, 12);
    insert(ccccc, 1234);
    insert(ccccc, 511112);

    display(ccccc);

    return 0;
}