#include <bits/stdc++.h>
using namespace std;

void maxmin(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;
}

//Factors of a number
void factors(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (n % i == 0 && i % j != 0)
            {
                result += i;
            }
        }
    }
    cout << result << endl;
}

void check(char a)
{
    if(isdigit(a)){
        cout << "Not an Alphabet\n";
    }
    else if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        cout << "Vowel\n";
    }
    else
    {
        cout << "Consonant\n";
    }
}
int solution(int balance){
    int a  = 100 - balance;
    if(a%3 == 0 || a%7 == 0){
        return 1;
    }
    return 0;
}


int toggleBulbs(int n){
    return sqrt(n);
}

int labAllocation(int x,int y,int z,int n){
    int count = 0;
    if(x>n){
        count+=1;
    }
    if(y>n){
        count+=1;
    }
    if(z>n){
        count+=1;
    }
    return count;
}

bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
         return false;
    
    return true;
}

int power(int a,int n){
    if(n==1)
    return a;
    if(n==0)
    return 1;
    return a*power(a,n-1);
}

void TreasureHunt(int gc,int x,int y){
    int a = gc*x/100;
    int b = a*y/100;
    int c = a - b;
    cout << a << " " << b <<  "  " << c;
}

void busque(int n,int m,int arr[]){
    int a = 0;
    for(int i=0;i<n;i++){
        a+=arr[i]; 
    }
    int ans = 0;
    while (a>=0)
    {
        a-=m;
        ans+=1;
    }
    cout << ans << endl;
}


bool azad(int ramount){
    int a = 100 - ramount;
    if(a%3==0 || a%7==0) return true;
    
    return false;
}

int fib(int n){
    if(n<2) return 1;
    return fib(n-2) + fib(n-1);
}

void check(int num){
    int i = 0;
    while(num!=fib(i)){
        i++;
        if(num==fib(i)){
            cout << "Yes\n";
        }      
    }
}

// void motorqMultiplesQuestion(int n,int m,int k,int arr[n]){
//     for(int i =0;i<n;i++){
//         if(){
//             arr[i]+= k - arr[i];
//         }
//     }
//     int result = 0;
//     for(int i =0 ;i<n;i++){
//         if(arr[i]%m==0){
//             result+=1;
//         }
//     }
//     cout << result << endl;
// }
void reverse_a_num(int n){
    int result = 0;
    while(n!=0){
        result = result*10 + n%10;
        n/=10;
    }
    cout <<  result << endl;
}

void scrabledVersion(string s1,string s2){
    int count = 0;
    for(int i=0;i<s1.size();i++){
        for(int j =0;j<s2.size();j++){
            if(s1[i]==s2[j]){
                count++;
            }
        }
    }
    if(s1.size() == s2.size() && count == s1.size()){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}

int stocks(int n,int arr[]){
    int temp_arr[n] = sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(temp_arr[i] == arr[j])
            j++;
        }
        
    }
}




int main()
{
    cout << 0;
    
    return 0;
}