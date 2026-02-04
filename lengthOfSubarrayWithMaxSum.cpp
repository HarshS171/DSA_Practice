// find longest subArray with Sum >= target

#include <bits/stdc++.h>
using namespace std;

int lengthOfSubarrayWithMaxSum(vector<int> arr, int k)
{
    int size = arr.size();
    int l = 0, r = 0, sum = 0, maxLength = 0;

    while (r < size)
    {
        sum = sum + arr[r];
        if (sum > k)
        {
            sum -= arr[l];
            l++;
        }
        if (sum <= k)
        {
            maxLength = max(maxLength, r - l + 1);
            r++;
        }
    }
    return maxLength;
}
int main()
{
    int n;
    cout << "Enter the number of elements in array : ";
    cin >> n;

    vector<int> arr;

    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int target;
    cout << "Enter the target element : ";
    cin >> target;

    int result = lengthOfSubarrayWithMaxSum(arr, target);

    cout << result << endl;

    return 0;
}