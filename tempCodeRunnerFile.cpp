#include<bits/stdc++.h>
using namespace std;

int differenceofSum(int n, int m)
{
    int i, sum1 = 0, sum2 = 0;
    for(i=1; i<=m; i++)
    {
        if(i%n==0)
        {
            sum1 = sum1 + i;
        }
        else
        {
            sum2 = sum2 + i;
        }   
    }
    return sum2 - sum1;
}

int main()
{
    int n, m;
    int result;
    cin>>n>>m;
    result = differenceofSum(n, m);
    cout<<result;
    return 0;
}