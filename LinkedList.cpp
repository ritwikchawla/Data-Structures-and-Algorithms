#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};

void printList(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertionAtBeginning(Node *&head,int data) {
    Node* ptr = new Node();
    ptr -> data = data ; 
    ptr ->next = head;
    head = ptr;
} 

void insertAfter(Node* &prev_node,int data){
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = prev_node ->next;

    prev_node ->next = ptr;
     
}

void insertAtLast(Node* &last_node,int data){
    
    Node* ptr = new Node();
    ptr ->data = data;
    ptr ->next = NULL;    
    last_node-> next = ptr;
}

void deletionAtBeginning(Node* &head){
    Node* temp_node = head;
    head = head -> next;
    delete temp_node;
}

void deletionAtGivenIndex(Node *&head,int index){
    Node *p = head;
    Node *q = head -> next;
    for (int i = 0;i<index-1;i++){
        p = p ->next;
        q= q->next;
    }
    p->next = q->next;
    free(q);
}

void deleteAtLast(Node *&head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
 
    // allocate 3 nodes in the heap ( Dynamic memory allocation)
    head = new Node();
    second = new Node();
    third = new Node();
 
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
                          
    second->data = 2; // assign data to second node
    second->next = third;
 
    third->data = 3; // assign data to third node
    third->next = NULL;
 
    printList(head);

    Node* ptr = new Node();
    ptr -> data  = 0;
    ptr ->next = head;
    head = ptr;            //insertion of a node without a function.
   

    insertionAtBeginning(head,0);

    insertAfter(second,5);

    insertAtLast(third,7);
    
    printList(head);
    deletionAtBeginning(head);

    printList(head);          

    deletionAtGivenIndex(head,1);
    deleteAtLast(head);     
    

    printList(head);

    return 0;
}