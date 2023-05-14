#include <bits/stdc++.h>
using namespace std;
#define n 20

class Queue
{
    public:
    int *arr;
    int front = 0;
    int rear = 0;
    Queue()
    {
        arr = new int[n];
    };
    // ~Queue() {delete[] arr;}
    void enqueue(int num)
    {
        if (rear == n-1)
        {
            cout << "Queue is full \n";
            exit(1);
        }
        arr[rear] = num;
        rear++;
    }

    void dequeue(){
       if(rear == 0){
           cout << "empty !\n";
       }
       front++;
    }

    void display(){
        if (rear==0)
        {
            cout << "Queue is empty !\n";
        }
        for (int i = front;i<rear;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        
    }

    void first(){
        cout << arr[0];
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.dequeue();
    q.display();
    
    return 0;
}
