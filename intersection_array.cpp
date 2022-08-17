#include <bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        if (b[j] < a[j])
        {
            j++;
        }
        else
        {
            cout << a[i];
            i++;
            j++;
        }
    }
}
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 3, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    intersection(a, b, n, m);

    return 0;
}