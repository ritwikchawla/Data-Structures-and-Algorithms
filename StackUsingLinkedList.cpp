#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *top;

void push(int data)
{
    Node *new_node = new Node();
    if (!new_node)
    {
        cout << "Heap overflow\n";
        exit(1);
    }
    
    
    new_node->data = data;
    new_node->next = top;
    top = new_node;
}

bool isEmpty()
{
    return top == NULL;
}

void pop()
{
    Node *temp;
    if (top == NULL)
    {
        cout << "No element ! POP() \n";
        exit(1);
    }
    else
    {
        temp = top;
        top = top->next;
        temp->next = NULL;
        free(temp);
    }
}

void display()
{
    Node *temp;
    if (top == NULL)
    {
        cout << "No element in stack DISPLAY()\n";
        exit(1);
    }
    else
    {

        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    cout << endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    display();
    pop();

    pop();
    display();

    return 0;
}
