#include <bits/stdc++.h>
using namespace std;

void merge(int arr_N[], int arr_M[], int n, int m)
{
    int i = n - 1;
    // int k = n - 1;
    int j = 0;
    while (i <= n - 1 && j < m)
    {
        if (arr_N[i] <= arr_M[j])

            i++;

        else
        {

            swap(arr_N[i], arr_M[j]);

            i--, j++;
        }
    }
    sort(arr_N, arr_N + n);
    sort(arr_M, arr_M + m);
}
int main()
{
    int arr_N[] = {1, 3, 5, 7};
    int arr_M[] = {0, 2, 6, 8, 9};
    int n = sizeof(arr_N) / sizeof(arr_N[0]);
    int m = sizeof(arr_M) / sizeof(arr_M[0]);
    merge(arr_N, arr_M, n, m);

    for (int i = 0; i < n; i++)
    {
        cout << arr_N[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << arr_M[i] << " ";
    }
    cout << endl;

    return 0;
}