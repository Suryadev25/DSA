#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cout << "n" << endl;
    cin >> n;
    int arr[n] = {0};
    cout << "arr" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort(A, A + n);
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {

    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }

    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (low <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high++]);
            break;
        }
    }
    for (i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}