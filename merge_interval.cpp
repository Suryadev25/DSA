// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> merge_v(vector<vector<int>> &interval)
// {
//     vector<vector<int>> mergedIntervals;
//     if (interval.size() == 0)
//     {
//         return mergedIntervals;
//     }
//     sort(interval.begin(), interval.end());
//     vector<int> temp = interval[0];
//     for (auto val : interval)
//     {
//         if (val[0] <= temp[1])
//         {
//             temp[1] = max(val[1], temp[1]);
//         }
//         else
//         {
//             mergedIntervals.push_back(temp);
//             temp = val;
//         }
//     }
//     mergedIntervals.push_back(temp);
//     return mergedIntervals;
// }
// int main()
// {

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cout << "Enter x and y" << endl;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    stack<pair<int, int>> s;
    s.push({v[0].first, v[0].second});
    for (int i = 1; i < n; i++)
    {
        int start1 = s.top().first;
        int end1 = s.top().second;
        int start2 = v[i].first;
        int end2 = v[i].second;

        if (end1 < start2)
        {
            s.push({start2, end2});
        }
        else
        {
            s.pop();
            end1 = max(end1, end2);
            s.push({start1, end1});
        }
    }
    cout << "After merging " << endl;
    while (!s.empty())
    {

        cout << s.top().first << " " << s.top().second << endl;
        s.pop();
    }

    return 0;
}