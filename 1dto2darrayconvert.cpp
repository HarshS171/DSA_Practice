#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr1d[n];
    cout << "Enter 9 elemnts" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1d[i];
    }
    cout << "1d array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1d[i] << " ";
    }
    cout << endl;

    int arr2d[3][3];
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2d[i][j] = arr1d[k];
            k++;
        }
    }

    cout << "2d array : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}