#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
};

void printList(Node *n){
    while (n != NULL)
    {
        cout << n -> data <<" ";
        n = n->next;
    }
    cout << endl;   
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
    head ->prev = NULL;
    head->next = second;

    second->data = 2;
    second -> prev = head;
    second->next = third;

    third->data = 3;
    third ->prev = second;
    third->next = NULL;

    printList(head);
    return 0;
}
