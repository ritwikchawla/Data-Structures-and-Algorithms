#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printlist(Node *head){
    Node *n = head;
    do{
        cout << n->data <<" ";
        n = n->next;
    }while(n!=head);
    cout << endl;
}

Node *insertion(Node *head,int data){
    Node *new_node = new Node();
    new_node ->data = data;

    Node *last_node = new Node();
    last_node-> next = head->next;

    while(last_node->next != head){
        last_node = last_node ->next;
    }
    last_node ->next = new_node;
    new_node ->next = head;
    head = new_node;
    return head;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = head;
    printlist(head);

    head = insertion(head,0);

    printlist(head);
    return 0;
}
