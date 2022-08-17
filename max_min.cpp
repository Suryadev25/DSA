// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "n\n";
//     cin >> n;
//     cout << "v\n";
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int max = *max_element(v.begin(), v.end());
//     cout << "max: " << max << endl;
//     int min = *min_element(v.begin(), v.end());
//     cout << "min:" << min << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// void max_min(int n, int arr[])
void max_min()
{
    int n;
    cout << "n" << endl;
    cin >> n;
    int arr[n];
    cout << "arr" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max, min;
    if (n == 1)
    {
        max = arr[0];
        min = arr[0];
    }
    else
    {
        if (arr[0] > arr[1])
        {
            max = arr[0];
            min = arr[1];
        }
        else
        {
            max = arr[1];
            min = arr[0];
        }
        for (int i = 2; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    cout << "The max is " << max << endl;
    cout << "The min is " << min << endl;
}
int main()
{
    // int arr[]={1,4,5,3,2};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // max_min(n, arr);
    max_min();
    return 0;
}