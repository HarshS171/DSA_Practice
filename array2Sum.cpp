#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int size = nums.size();

    vector<pair<int, int>> arr; // vector array which contains subarrays (having a pair of elements) as elements

    for (int i = 0; i < size; i++) // feeding sub-array (an element of arr array) with each element along with its index of nums array
    {
        arr.push_back({nums[i], i});
    }

    sort(arr.begin(), arr.end()); // sort is a function of pair which sorts pairs by their FIRST value automatically, if first is same then compare SECOND value

    // Two pointers
    int l = 0;
    int r = size - 1;

    while (l < r)
    {
        int sum = arr[l].first + arr[r].first;

        if (sum == target)
        {
            return {arr[l].second, arr[r].second};
        }

        else if (sum > target) // If sum is greater, decrease right pointer
        {
            r--;
        }

        else // If sum is smaller, increase left pointer
        {
            l++;
        }
    }

    return {-1, -1};
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

    vector<int> result = twoSum(arr, target);

    cout << "[ " << result[0] << ", " << result[1] << " ]" << endl;

    return 0;
}