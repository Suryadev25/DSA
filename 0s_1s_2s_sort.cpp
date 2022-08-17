#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "n" << endl;
    cin >> n;
    cout << "arr" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ct0 = 0, ct1 = 0, ct2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            ct0++;
        }
        else if (arr[i] == 1)
        {
            ct1++;
        }
        else
            ct2++;
    }
    int k = 0;
    for (int i = 0; i < ct0; i++)
    {
        arr[k++] = 0;
    }
    for (int i = 0; i < ct1; i++)
    {
        arr[k++] = 1;
    }
    for (int i = 0; i < ct2; i++)
    {
        arr[k++] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}