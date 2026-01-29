#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r)
{
    vector<int> temp;
    int i = l, j = mid + 1;

    // merge
    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // remaining elements
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= r)
    {
        temp.push_back(arr[j]);
        j++;
    }

    //copying from temporary array to main array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + l] = temp[i];
    }
}

void merge_sort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;

        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        merge(arr, l, mid, r);
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
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    merge_sort(arr, 0, arr.size() - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}