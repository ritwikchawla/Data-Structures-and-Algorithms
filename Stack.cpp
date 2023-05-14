#include <bits/stdc++.h>
using namespace std;

#define n 1000
// Stack implementation using array!! 

class Stack
{
public:
    int top = -1;
    int *arr;
    Stack(){
        arr = new int[n];
    }

    void push(int num){
        if(top>=n){
            cout << "Stack overflow"<<endl;
        }
        arr[++top] = num;
    }
    void display(){
        if (top <= -1){
            cout << "Stack is empty"<<endl;
        }
        for (int i=0;i<=top;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void pop(){
        if (top <= -1){
            cout << "Stack is empty"<<endl;
        }
        top-=1;
    }
    void peek(int index){
        if (index>top || index<0) {cout << "incorrect index value \n";}
        else{
            cout << arr[index]<<endl;
        }   
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    // s.pop();
    s.pop();
    s.display();
    s.peek(10);
    return 0;
}
