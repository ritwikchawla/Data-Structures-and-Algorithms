#include <bits/stdc++.h>
using namespace std;

bool checkIfnoIspowerOf2(int n)
{
    if (((n - 1) & n) == 0)
        return true;

    return false;
}

int xortilln(int n)
{
    if (n == 1)
        return 1;

    return n ^ xortilln(n - 1);
}

bool checkIfKthBitIsSet(int n, int k)
{
    if ((n >> (k - 1) & 1) == 1)
        return true;
    return false;
}

unsigned int countSetBits(int n)
{
    if (n == 0)
        return 0;
    int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}

// Refer screenshot before for notes
int findOdd(int n, int arr[])
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

unsigned int getFirstSetBit(int n)
{
    int count = 1;

    while (n>0)
    {
        if ((n & 1) == 1)
            return count;
        n >>= 1;
        count++;
    }

    return 0;
}

int main()
{
    // cout << (5&4)<<endl; // AND
    // cout << (5|4)<<endl; // OR
    // cout << (5<<4)<<endl; // left shift
    // cout << (5>>4)<<endl; // right shift
    // cout << (5^4)<<endl;  // XOR
    // cout << (~5)<<endl; // NOT
    // cout << checkIfnoIspowerOf2(16);
    // cout << xortilln(6);
    // cout <<checkIfKthBitIsSet(5,3);
    // cout << countSetBits(13);
    // int n = 9;
    // int arr[n] = {4, 3, 4, 4, 4, 5, 5, 3, 3};
    // cout << findOdd(n, arr);
    cout << (~50);
    return 0;
}
