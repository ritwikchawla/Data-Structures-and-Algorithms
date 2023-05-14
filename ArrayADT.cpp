#include <iostream>
using namespace std;

void traversal(int arr[],int n){
    for (int i = 0 ;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void insertion(int index,int value,int arr[]){
    for(int i =0;i<=index;i++){
        if (i == index){
            arr[i] == value;
            break;
        }
        else{
            continue;
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    traversal(arr,5);
    insertion(3,70,arr);
    traversal(arr,5);
    return 0;
}