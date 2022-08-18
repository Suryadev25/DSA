// Max Sum Subarray of size k

// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int k;
//     cin >> k;
//     int start = 0, end = 0, sum = 0, maxi = INT_MIN;
//     while (end < n)
//     {
//         sum += a[end];
//         if (end - start + 1 < k)
//             end++;
//         else if (end - start + 1 == k)
//         {

//             maxi = max(maxi, sum);
//             sum -= a[start];
//             start++;
//             end++;
//         }
//     }

//     cout << maxi << endl;
//     return 0;
// }

// First Negative Number in every Window of size k

// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     int a[n];
//     vector<int> v;
//     list<int> l;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int k;
//     cin >> k;
//     int i = 0;
//     int j = 0;
//     while (j < n)
//     {
//         if (a[j] < 0)
//         {
//             l.push_back(a[j]);
//         }

//         if (j - i + 1 < k)
//         {
//             j++;
//         }
//         else if (j - i + 1 == k)
//         {

//             if (l.empty())
//             {
//                 v.push_back(0);
//             }
//             else
//             {

//                 v.push_back(l.front());
//                 if (l.front() == a[i])
//                 {

//                     l.pop_front();
//                 }
//             }
//             i++;
//             j++;
//         }
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }

//     return 0;
// }

// *******************Count No. of Anagrams**********************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     string s;
//     cin >> s;
//     string ptr;
//     cin >> ptr;
//     unordered_map<char, int> mp;
//     for (int i = 0; i < ptr.length(); i++)
//     {
//         mp[ptr[i]]++;
//     }
//     // for (auto it : mp)
//     // {
//     //     cout << it.first << " " << it.second << endl;
//     // }
//     int k = ptr.size();
//     int count = mp.size();
//     int ans = 0;
//     int i = 0;
//     int j = 0;
//     while (j < s.size())
//     {
//         if (mp.find(s[j]) != mp.end())
//         {
//             mp[s[j]]--;
//             if (mp[s[j]] == 0)
//             {
//                 count--;
//             }
//         }
//         if (j - i + 1 < k)
//         {
//             j++;
//         }
//         else if (j - i + 1 == k)
//         {
//             if (count == 0)
//             {
//                 ans++;
//             }
//             if (mp.find(s[i]) != mp.end())
//             {
//                 mp[s[i]]++;
//                 if (mp[s[i]] > 0)
//                 {
//                     count++;
//                 }
//             }
//             i++;
//             j++;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

//*****************Max of all Subarray of size k*****************

// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int k;
//     cin >> k;
//     list<int> li;
//     vector<int> ans;
//     int i = 0, j = 0;
//     while (j < n)
//     {
//         while (li.size() > 0 && li.back() < a[j])
//         {
//             li.pop_back();
//         }
//         li.push_back(a[j]);
//         if (j - i + 1 < k)
//         {
//             j++;
//         }
//         else if (j - i + 1 == k)
//         {
//             ans.push_back(li.front());
//             if (a[i] == li.front())
//             {
//                 li.pop_front();
//             }
//             i++;
//             j++;
//         }
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//*****************************************Variable Size Window**********************************************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int k;
//     cin >> k;
//     int sum = 0;
//     int i = 0, j = 0, maxi = 0;
//     while (j < n)
//     {
//         sum += a[j];
//         if (sum < k)
//         {
//             j++;
//         }
//         else if (sum == k)
//         {
//             maxi = max(maxi, j - i + 1);
//             j++;
//         }
//         else if (sum > k)
//         {
//             while (sum > k)
//             {
//                 sum -= a[i];
//                 i++;
//                 if (sum == k)
//                 {
//                     maxi = max(maxi, j - i + 1);
//                     break;
//                 }
//             }
//             j++;
//         }
//     }
//     cout << maxi << endl;
//     return 0;
// }