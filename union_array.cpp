// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         unordered_map<int, int> mp;
//         cin >> n >> m;
//         int a[n], b[m];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             mp[a[i]]++;
//         }
//         for (int j = 0; j < m; j++)
//         {
//             cin >> b[j];
//             mp[b[j]]++;
//         }
//         cout << mp.size() << endl;
//     }
//     return 0;
// }
// **************************** Method 2 ************************************
#include <bits/stdc++.h>
using namespace std;
void find_union(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (b[j] < a[i])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";

            i++;
            j++;
        }
    }
    while (i < m)
        cout << a[i] << " ";
        i++;

    while (j < m)
        cout << b[j++] << " ";
        
}
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 3, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    find_union(a, b, n, m);
    return 0;
}