#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Queue
{
    Node *front = NULL;
    Node *rear = NULL;

    void enqueue(int data){
        Node *temp = new Node(data);
        if(front==NULL){
            front = temp;
            rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    } 

    int dequeue(){
        Node* temp = front;
        int a = front->data;
        front = front->next;
        delete temp;
        return a;
    }

    bool isEmpty(){
        return front==NULL;
    }
};


int main(){

    return 0;
}