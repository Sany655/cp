#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        return 1 + numberOfStepsReduceToZero(num / 2);
    else
        return 1 + numberOfStepsReduceToZero(num - 1);
}

bool isSorted(vector<int> arr, int i)
{
    if (i == 1)
        return true;
    if (arr[i] < arr[i - 1])
        return false;
    else
        isSorted(arr, --i);
}

int linearSearch(vector<int> arr, int index, int value)
{
    if (index < 0)
        return -1;
    if (arr[index] == value)
        return index;
    else
        return linearSearch(arr, --index, value);
}

void square(int r, int c, int l)
{
    if (r == 0)
        return;
    if (c == l)
    {
        cout << endl;
        square(r - 1, 0, l);
    }
    else
    {
        cout << "*";
        square(r, c + 1, l);
    }
}

void triangle(int r, int c, int l)
{
    if (r == 0)
        return;
    if (c < r)
    {
        cout << " ";
        triangle(r, c + 1, l);
    }
    else if (c >= r)
    {
        if (c > l)
        {
            cout << "\n";
            triangle(r - 1, 0, l);
        }
        else
        {
            cout << "*";
            triangle(r, c + 1, l);
        }
    }
}

void pyramid(int r, int l, int c, int le)
{
    if (r == ((le * 2)))
        return;
    if (c <= r)
    {
        if (c >= l)
        {
            cout << "*";
            pyramid(r, l, ++c, le);
        }
        else
        {
            cout << " ";
            pyramid(r, l, ++c, le);
        }
    }
    else
    {
        cout << "\n";
        pyramid(++r, --l, 0, le);
    }
}

vector<int> bubbleSort(vector<int> arr, int currentIndex, int index)
{
    if (currentIndex == 0)
        return arr;
    else
    {
        if (index < currentIndex)
        {
            if (arr[index] > arr[index + 1])
            {
                swap(arr[index], arr[index + 1]);
            }
            return bubbleSort(arr, currentIndex, index + 1);
        }
        else
        {
            return bubbleSort(arr, currentIndex - 1, 0);
        }
    }
}

vector<int> selectionSort(vector<int> arr, int currentIndex, int index, int minEl, int elIndex)
{
    if (currentIndex == arr.size())
        return arr;
    else
    {
        if (index < arr.size())
        {
            if (minEl > arr[index])
            {
                minEl = arr[index];
                elIndex = index;
            }
            return selectionSort(arr, currentIndex, index + 1, minEl, elIndex);
        }
        else
        {
            swap(arr[elIndex], arr[currentIndex]);
            return selectionSort(arr, currentIndex + 1, currentIndex + 1, arr[currentIndex + 1], currentIndex + 1);
        }
    }
}

vector<int> mergeSort(vector<int> arr)
{
    if (arr.size() == 1)
        return arr;
    vector<int> n1, n2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i < arr.size() / 2)
            n1.push_back(arr[i]);
        else
            n2.push_back(arr[i]);
    }
    vector<int> n3 = mergeSort(n1);
    vector<int> n4 = mergeSort(n2);
    vector<int> n5;
    int j = 0, k = 0;
    while ((j + k) < n3.size() + n4.size())
    {
        if (n3[j] <= n4[k])
        {
            n5.push_back(n3[j]);
            j++;
        }
        else
        {
            n5.push_back(n4[k]);
            k++;
        }
    }
    return n5;
}

vector<int> quickSort(vector<int> arr)
{
}

int main()
{
    optimize();
    vector<int> arr = {9, 8, 3, 6, 5, 4, 7, 2, 1};
    vector<int> narr = mergeSort(arr);
    for (auto i : narr)
    {
        cout << i << " ";
    }

    return 0;
}

// void recursionFun(){
// Base case

//  --------Body of the recursion---------
// recursive case

// This is the tail recursion

// this is the last function call
// }