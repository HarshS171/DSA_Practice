#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int index = start - 1;

    int pivot = arr[end];

    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            ++index;
            swap(arr[index], arr[i]);
        }
    }

    ++index;
    swap(arr[index], arr[end]);

    return index;
}

void quick_sort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivot_index = partition(arr, start, end);

        quick_sort(arr, start, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, end);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    cout << endl;

    vector<int> arr;

    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    quick_sort(arr, 0, arr.size() - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
