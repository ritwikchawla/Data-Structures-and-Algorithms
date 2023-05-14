#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertion(struct Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertion(root->left, val);
    }
    else
    {
        //val > root->data
        root->right = insertion(root->right, val);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

struct Node* search(struct Node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key)
       return root;
    
    // Key is greater than root's key
    if (root->data < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}

int main()
{
    struct Node *root = NULL;
    root = insertion(root,5);
    insertion(root, 1);
    insertion(root, 7);
    insertion(root, 4);
    insertion(root, 3);
    insertion(root, 2);

    inorder(root);
    cout << endl;
    if (search(root, 5) == NULL)
    {
        cout << "Key does not exist!\n";
    }
    else
    {
        cout << "Key exist!\n";
    }
    return 0;
}
