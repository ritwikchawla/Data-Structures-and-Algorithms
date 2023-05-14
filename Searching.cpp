#include <bits/stdc++.h>
using namespace std;

//Array should always be sorted before searching.


int linearsearch(int arr[],int n,int key){
    for(int i = 0;i<n;i++){
        if(arr[i] == key){
            return i;
        }   
    }
    return -1;
}

int binarySearch(int arr[],int n,int key){
    int s = 0 ;
    int e = n-1 ;
    while (s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid + 1 ;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{ 
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    cout << linearsearch(arr,n,2) << endl;
    cout << binarySearch(arr,n,5) <<endl;
    return 0;
}
