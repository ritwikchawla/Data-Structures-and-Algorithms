#include <bits\stdc++.h>
using namespace std;

//TC : O(n2)
//SC : O(1)

void selectionSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;	
			}
		}
	}
}

void bubbleSort(int arr[],int n){
	int counter = 1 ;
	while(counter<n){
		for (int i = 0; i < n-counter;i++)
		{
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		counter++;
	}
}

void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int temp = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
void merge(int arr[],int l,int mid,int r){
	int n1 = mid-l+1;
	int n2 = r-mid;

	int a[n1];
	int b[n2];

	for(int i =0 ;i<n1;i++){
		a[i] = arr[l+i];
	}
    for(int j =0 ;j<n2;j++){
		b[j] = arr[mid+1+j];
	}


	int i = 0;
	int j = 0;
	int k = l;
    while(i<n1 && j<n2){
		if(a[i] < b[j]){
			arr[k] = a[i];
			i++;k++;
		}
		else
		{
			arr[k] = b[j];
			k++;j++;
		}
	}
	while(i<n1){
		arr[k] = a[i];
		i++;k++;
	}
	while (j<n2)
	{
		arr[k] = b[j];
		j++;k++;
	}
	

}

void mergesort(int arr[],int l,int r){
	if(l<r){
		int mid = (l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}

void quicksort(){
}

void printarray(int arr[],int n){
	for(int i =0;i<n;i++){
		cout << arr[i]<< " ";
	}
	cout << endl;
}

int main() {
	int arr[5] = {5,4,3,2,1};
    int n = 5;
	// selectionSort(arr,n);
	// bubbleSort(arr,n);
	//insertionSort(arr,n);
	mergesort(arr,0,4);
	printarray(arr,n);
	return 0;
}
