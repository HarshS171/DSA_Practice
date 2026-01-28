#include <bits/stdc++.h>
using namespace std;

int binary_search_recursive(vector<int> &arr, int key, int l, int b)
{
    if (l > b)
    { // base case
        return -1;
    }

    int mid = l + (b - l) / 2;

    if (arr[mid] > key)
    {
        return binary_search_recursive(arr, key, l, mid - 1);
    }
    else if (arr[mid] < key)
    {
        return binary_search_recursive(arr, key, mid + 1, b);
    }
    else
    {
        return mid;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << n << endl;

    vector<int> arr;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    int target;
    cout << "Enter target element you want to search : ";
    cin >> target;

    int l = 0;
    int b = arr.size() - 1;

    cout << "The target element is at index : " << binary_search_recursive(arr, target, l, b) << endl;
    return 0;
}