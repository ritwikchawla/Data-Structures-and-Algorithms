#include <bits/stdc++.h>
using namespace std;
#define n 8

class CircularQueue{
    int *arr;
    int front,rear =0;
    public:
    CircularQueue(){
        arr = new int[n];
    };

    void enqueue(int data){
        if( (front == 0 && rear == n-1) || (rear == front - 1) ) {
            cout << "Queue is full\n";
        }
        else if(rear == n-1){
            rear = 0;
            arr[rear] = data;
            rear++;
        }
        arr[rear] = data;
        rear++;
    }

    void dequeue(){
        if(front == rear){
            cout << "Queue is empty!\n"; 
        }
        front++;
    }

    void display(){
        if (front == rear){
            cout << "Queue is empty! \n";
        }
        else if (front < rear){
            for (int i = front; i<=rear; i++)
            {
                cout << arr[i] << " " ;
            }
            cout << endl;
        }
        else if(front > rear) {
            for(int i=rear;i<=front;i++){
                cout <<arr[i] << " ";
            }
            cout << endl;
        }
    }
};




int main()
{
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);
    cq.enqueue(70);
    
    cq.display();
    return 0;
}
