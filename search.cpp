#include <bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;

    if (arr[low] <= arr[mid])
    {
        if (key >= arr[low] && key <= arr[mid])
            return Binary_Search(arr, low, mid - 1, key);
        return Binary_Search(arr, mid + 1, high, key);
    }

    if (key >= arr[mid] && key <= arr[high])
        return Binary_Search(arr, mid + 1, high, key);
    return Binary_Search(arr, low, mid - 1, key);
}
int main()
{

    int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    int i = Binary_Search(arr, 0, n - 1, key);
    if (i != -1)
        cout << "Index is : " << i << endl;
    else
        cout << "Key not valid" << endl;
    return 0;
}