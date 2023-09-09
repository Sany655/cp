#include <bits/stdc++.h>
using namespace std;

string reverseString(string a)
{
    if (a == "")
        return a;
    return reverseString(a.substr(1)) + a[0];
}

string palindrom(string a)
{
    if (a.length() <= 1)
        return "true";
    if (a.front() == a.back())
    {
        a.pop_back();
        return palindrom(a.substr(1));
    }
    else
    {
        return "false";
    }
}

int decimalToBin(int x)
{
    if (x <= 1)
        return x;
    return decimalToBin(x / 2) * 10 + x % 2;
}

int sumOfNaturalNumbers(int x)
{
    if (x == 0)
        return x;
    return sumOfNaturalNumbers(x - 1) + x;
}

int binSearch(vector<int> arr, int l, int r, int x)
{
    if (x < arr[l] || x > arr[r - 1])
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] < x)
        return binSearch(arr, mid, r, x);
    else if (arr[mid] > x)
        return binSearch(arr, l, mid, x);
    else
        return mid + 1;
}

vector<int> GA;
int fibonacci(int x) // 5
{
    // if (x <= 1)
    //     return x;
    // return fibonacci(x - 1) + fibonacci(x - 2);
}

int product(int n)
{
    // Base case
    if (n == 1)
        return n;
    // int x = product(n - 1);
    // return x * n;
    return product(n - 1) * n;
}

int sumOfDigit(int x)
{
    if (x < 10)
        return x;
    // int a = sumOfDigit(x/10);
    // return a+(x%10);
    return sumOfDigit(x / 10) + (x % 10);
}

int countZeroes(int x, int a)
{
    if (x == 0)
        return a;
    a += x % 10 == 0 ? 1 : 0;
    return countZeroes(x / 10, a);
}

int numberOfStepsReduceToZero(int num)
{
    if (num == 0)
        return 0;
    if (num % 2 == 0)
        return 1+numberOfStepsReduceToZero(num / 2);
    else
        return 1+numberOfStepsReduceToZero(num - 1);
}

int main()
{
    vector<int> arr = {9, 7, 8, 6, 4, 5, 2, 3, 1};
    // cout << numberOfSteps(123);
    return 0;
}

// void recursionFun(){
// Base case

//  --------Body of the recursion---------
// recursive case

// This is the tail recursion

// this is the last function call
// }