#include <bits/stdc++.h>
using namespace std;

int min_jump(int arr[], int n)
{
    int max_r = arr[0];
    int step = arr[0];
    int jump = 1;
    if (n <= 1)
        return 0;
    else if (arr[0] == 0)
        return -1;
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                return jump;
            }

            max_r = max(max_r, arr[i] + i);
            step--;
            // if (step < 0)
            //     return -1;
            if (step == 0)
            {
                jump++;
                if (i >= max_r)
                {

                    return -1;
                }
                step = max_r - i;
            }
        }
    }
}
int main()
{
    // int arr[] = {1, 2, 5, 8, 9, 2, 6, 7, 6, 0, 9};
    // int arr[] = {2, 2, 0, 3};
    int arr[] ={};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << min_jump(arr, n);
    return 0;
}