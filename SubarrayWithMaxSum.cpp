// max sum that can be obatined from a subArray with number of elements = target, we can either take elements from back or from front only and from middle (circular kind of)

#include <bits/stdc++.h>
using namespace std;

int SubarrayWithMaxSum(vector<int> arr, int k)
{
    int size = arr.size();
    int lSum = 0, rSum = 0, maxSum = 0;
    for (int l = 0; l < k; l++)
    {
        lSum = lSum + arr[l];
    }

    maxSum = lSum;

    int r = size - 1;
    for (int i = k - 1; i >= 0; i--){
        lSum = lSum - arr[i];
        rSum = rSum + arr[r];
        r = r - 1;

        maxSum = max(maxSum, lSum + rSum);
    }

    return maxSum;
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

    int result = SubarrayWithMaxSum(arr, target);

    cout << result << endl;

    return 0;
}