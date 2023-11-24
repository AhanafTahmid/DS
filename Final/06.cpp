//Write a program to create a Linked List of n elements and then insert an element to the list.


//Same as 4 number
#include <bits/stdc++.h>
using namespace std;

struct LL{
    int data;
    LL *next;
};


LL *insert(LL *root,int data){
    //If there is nothing in the linked list, create a linked list
    if(root == NULL){
        root = new LL();
        root->data = data;
        root->next = NULL;
    }
    //for existing linked list
    else{
        //making a copy of the root node in the cp node
        LL *cp = root;//current node copy 
        while(cp->next != NULL){//finding the last node
            cp = cp->next;//go to next address
        }
        //creating a new node
        LL *new_node = new LL();
        new_node->data = data;
        new_node->next = NULL;

        //linking with the last node
        cp->next = new_node;
    }

    return root;

}

//root is the current data


void display(LL *root){
    // cout<<root->data<<endl;
    // if(root->next == NULL) return;
    // display(root->next);

    if(root==NULL) return;
    cout<<root->data<<endl;
    display(root->next);
   

    // LL *cp = root;
    // while(cp!=NULL){//node khali thakle
    //     cout<<cp->data<<endl;
    //     cp = cp->next;
    // }


}



int main(){

    LL *root = NULL;
    //assigning the root the node
    root = insert(root,1);
    root = insert(root,15);
    root = insert(root,33);
    
    display(root);
    
    return 0;
}




//############################################################################################################
//############################################################################################################


//Inserting at the beginning, at the middle and at the end
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node *create_node(int item, Node *next)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error! Could not create a new node.\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

Node *prepend(Node *head,int item)
{
    Node *new_node = create_node(item,head);
    return new_node;
}

Node *append(Node *head,int item)
{
    Node *new_node = create_node(item,NULL);
    if(head == NULL){
        return new_node;
    }
    Node *current_node = head;
    while(current_node->next != NULL){
        current_node = current_node->next;
    }
    current_node->next = new_node;
    return head;
}

void insert(Node *node,int item)
{
    Node *new_node = create_node(item,node->next);
    node->next = new_node;
}

int main()
{
    Node *n, *m, *o, *head;
    n = create_node(10,NULL);
    m = create_node(20,NULL);
    o = create_node(30,NULL);
    head = n;
    n->next = m;
    m->next = o;

    // print the original list
    printf("Original Linked List:\n");
    Node *current_node = head;
    while(current_node != NULL){
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");

    // add a new node with value 25 after the second node (m)
    insert(m, 25);

    // print the updated list
    printf("Updated Linked List:\n");
    current_node = head;
    while(current_node != NULL){
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");

    return 0;
}