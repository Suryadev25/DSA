#include <bits/stdc++.h>
using namespace std;

// int B_Search(int arr[], int low, int high, int key)
// {

//     while (low <= high)
//     {

//         int mid = (low + high) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (key > arr[mid])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
int B_Search(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;

        if(key>arr[mid])
        low = mid+1;
        return B_Search(arr , mid+1 , high , key);
        return B_Search(arr , low , mid -1, key);
        
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = B_Search(arr, 0, n - 1, key);
    if (ans != -1)
    {
        cout << "The index is : " << ans << endl;
    }
    else
    {
        cout << "Invalid key!!" << endl;
    }
    return 0;
}