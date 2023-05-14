#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    int a[n];
	    cin >> n >> x;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    int sum; 
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            sum = a[i]+a[j]; 
	        }
	    }
	    if(sum == x){
	        cout << 2 << endl;
	    }
	    else {
	        cout << "-1" << endl;
	    }
	}
	return 0;
}
