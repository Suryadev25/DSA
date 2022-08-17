#include <bits/stdc++.h>
using namespace std;

bool Given_pair(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n - 1; i++){

        if (arr[i] > arr[i + 1])
            break;
    }
    int low = (i + 1) % n;
    int high = i;

    while (low != high)
    {

        if ((arr[low] + arr[high]) == x)
        {
            return true;
        }
        else if ((arr[low] + arr[high]) < x)
        {
            low = (low + 1) % n;
        }
        high = (high + n - 1) % n;
    }
    return false;
}
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int sum = 16;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (Given_pair(arr, n, sum))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
//******************** To count no. of pairs in given array *********************
// #include <bits/stdc++.h>
// using namespace std;

// int Count_Pair(int arr[], int n, int x)
// {
//     int i;
//     for (i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//             break;
//     }
//     int low = (i + 1) % n;
//     int high = i;
//     int count = 0;

//     while (low != high)
//     {
//         if (arr[low] + arr[high] == x)
//         {
//             count++;
//        if(low == (high +n-1)%n){
//             return count;
//         }
//         low = (low+1)%n;
//         high = (high +n-1)%n;
//     }
//         else if(arr[low]+arr[high]<x){
//            low = (low+1)%n;
//         }
//         else
//         high = (high +n-1)%n;
//         }
//     return count;
// }
// int main()
// {
//     int arr[]={11,15,6,7,9,10};
//     int sum = 16;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<Count_Pair(arr,n,sum);

//     return 0;
// }