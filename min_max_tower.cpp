#include <bits/stdc++.h>
using namespace std;

int Min_diff(int arr[], int n, int k)
{
    //     vector<pair<int, int>> v;
    //     vector<int> vis(n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] - k >= 0)
    //         {
    //             v.push_back({arr[i] - k, i});
    //         }
    //         v.push_back({arr[i] + k, i});
    //     }
    //     sort(v.begin(), v.end());
    //     int ele = 0;
    //     int left = 0;
    //     int right = 0;

    //     while (ele < n && right < v.size())
    //     {
    //         if (vis[v[right].second] == 0)
    //         {
    //             ele++;
    //         }
    //         vis[v[right].second]++;
    //         right++;
    //     }
    //     int ans = v[right - 1].first - v[left].first;
    //     while (right < v.size())
    //     {
    //         if (vis[v[left].second] == 1)
    //         {
    //             ele--;
    //         }
    //         vis[v[left].second]--;
    //         left++;

    //         while (ele < n && right < v.size())
    //         {
    //             if (vis[v[right].second] == 0)
    //             {
    //                 ele++;
    //             }
    //             vis[v[right].second]++;
    //             right++;
    //         }
    //         if (ele == n)
    //         {
    //             ans = min(ans, v[right - 1].first - v[left].first);
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     return ans;
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int small = arr[0] + k;
    int large = arr[n - 1] - k;
    int mi, ma;
    for (int i = 0; i < n; i++)
    {
        mi = min(small, arr[i + 1] - k);
        // mi = small;
        ma = max(large, arr[i] + k);
        // ma = large;
        if (mi < 0)
        {
            continue;
        }
        ans = min(ans, ma - mi);
    }
    return ans;
}
int main()
{
    // int t;
    // cin>>t;
    // while(t--){
    //     int n , k;
    //     cin>>k>>n;
    //     int arr[n];
    //     for(int i=0 ; i<n ; i++){
    //         cin>>arr[i];
    //     }

    // }
    int arr[] = {8, 8, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << Min_diff(arr, n, k);
    return 0;
}