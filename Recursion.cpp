#include <bits/stdc++.h>
using namespace std;

void functionxyz(int n){
	if(n==0){
        return;
    }
	functionxyz(n-1);
	cout << n << " ";
}

int addnos(int n,int arr[]){
	if(n==0) 
	 return 0;

	return  addnos(n-1,arr) + arr[n-1] ;  
}

int power(int n,int p){
	if(p == 0)
	 return 1;

	return n*power(n,p-1); 
}

bool checkarr(int n,int arr[]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				return true; 
			}
		}
	}
	return false;
}

int sum_nos(int n){
	if(n==0){
		return 0;
	}
	return n + sum_nos(n-1);
}

bool palindromeCheck(string s,int start,int end){
	if(start>=end){
        return true;
    }

    return (s[start] == s[end]) && palindromeCheck(s,start+1,end-1);
}

int sum_of_digits(int n){
    if(n==0)
     return 0;

    return n%10 + sum_of_digits(n/10); 
}


int ropeCutting(int n,int a ,int b,int c){
	if(n==a || n==b || n==c)
	 return 1;

	if(a>n||b>n||c>n)
	 return 0;  

	if(n>a || n>b||n>c)
	 return max(max(ropeCutting(n-a,a,b,c),ropeCutting(n-b,a,b,c)),ropeCutting(n-c,a,b,c) );

	return 0; 
}

int main()
{
	// int n = 5;
	// int arr[n] = {1,2,3,6,5};
	// cout << checkarr(n,arr);
	//cout << sum_nos(4);
    cout << palindromeCheck("abccba",0,5);
    //cout << sum_of_digits(25301);
	// cout << ropeCutting(5,2,3,1);
	return 0;
}