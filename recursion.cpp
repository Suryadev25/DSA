// #include <bits/stdc++.h>
// using namespace std;

// int digits(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     int subans = digits(n / 10);
//     int ans = subans + 1;
//     return ans;
// }

// int main()
// {
//     int ans = digits(832541);
//     cout << ans << endl;

//     return 0;
// }
// ******************** Tower of Hanoi ********************

// #include <bits/stdc++.h>
// using namespace std;
// void TowerOfHanoi(int n, char source, char helper, char destination)
// {
//     if (n == 1)
//     {
//         cout << "Move 1st disk to " << destination << " from " << source << endl;
//         return;
//     }
//     TowerOfHanoi(n - 1, source, destination, helper);
//     cout << "move " << n << "th disk to " << destination << " from " << source << endl;
//     TowerOfHanoi(n - 1, helper, source, destination);
// }
// int main()
// {
//     int n;
//     cout << "Enter n: " << endl;
//     cin >> n;
//     TowerOfHanoi(n, 'a', 'b', 'c');

//     return 0;
// }

//********************** Keypad *************************************
// #include <bits/stdc++.h>
// using namespace std;

// string keypad_char(char c)
// {

//     if (c == '2')
//         return "abc";
//     if (c == '3')
//         return "def";
//     if (c == '4')
//         return "ghi";
//     if (c == '5')
//         return "jkl";
//     if (c == '6')
//         return "mno";
//     if (c == '7')
//         return "pqrs";
//     if (c == '8')
//         return "tuv";
//     if (c == '9')
//         return "wxyz";

//     return "";
// }

// int getkeypad(string input, string output[])
// {
//     if (input.length() == 0)
//     {
//         output[0] = "";
//         return 1;
//     }
//     int smallerOutput = getkeypad(input.substr(1), output);
//     string firstDigit = keypad_char(input[0]);

//     string temp[1000];
//     int k = 0;

//     for (int i = 0; i < smallerOutput; i++)
//     {
//         for (int j = 0; j < firstDigit.length(); j++)
//         {
//             temp[k] = firstDigit[j] + output[i];
//             k++;
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         output[i] = temp[i];
//     }
//     return smallerOutput * firstDigit.length();
// }
// int main()
// {
//     string output[1000];
//     int outputsize = getkeypad("5ff23", output);

//     for (int i = 0; i < outputsize; i++)
//     {
//         cout << output[i] << endl;
//     }
//     return 0;
// }

// **********************Practice************************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n == 2)
//     {
//         return 2;
//     }
//     else
//     {
//         int rec1 = sum(n - 1);
//         int rec2 = sum(n - 2);
//         int call = rec1 + rec2;
//         return call;
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     cout << sum(n);
//     return 0;
// }

// Palindrome String
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int helper(string s, int start, int end)
// {
//     if (start >= end)
//     {
//         return 1;
//     }
//     if (s[start] != s[end])
//     {
//         return 0;
//     }
//     return helper(s, start + 1, end - 1);
// }
// int ispalindrome(string s)
// {
//     // int n = s.size() - 1;
//     return helper(s, 0, s.size() - 1);
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     string s;
//     cin >> s;
//     cout << ((ispalindrome(s) == 1) ? "YES" : "NO");

//     return 0;
// }

// Reverse Array
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// void reversing(vector<int> &v, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }

//     int temp = v[start];
//     v[start] = v[end];
//     v[end] = temp;

//     reversing(v, start + 1, end - 1);
// }
// void print(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }

// int32_t main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     vector<int> vec;
//     vec = {1, 2, 3, 4, 5};
//     reversing(vec, 0, vec.size() - 1);
//     print(vec);

//     return 0;
// }

// Subsequences
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// // Here we have two conditions , (take)/(not take)
// void helper(string s, string ans, int i)
// {
//     if (s.length() == i)
//     {
//         cout << ans << " ";
//         return;
//     }
//     helper(s, ans + s[i], i + 1);
//     helper(s, ans, i + 1);
//     return;
// }
// vector<string> Answer(string s)
// {
//     vector<string> an;
//     helper(s, "", 0);
//     return an;
// }

// int32_t main()
// {
//     string s;
//     cin >> s;
//     Answer(s);
//     return 0;
// }

// Subsets
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// vector<vector<int>> ans;
// void helper(vector<int> v, vector<int> temp, int i)
// {
//     if (v.size() == i)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     temp.push_back(v[i]);
//     helper(v, temp, i + 1);
//     temp.pop_back();
//     helper(v, temp, i + 1);
//     return;
// }

// vector<vector<int>> subsets(vector<int> &v)
// {
//     vector<int> temp;
//     helper(v, temp, 0);
//     sort(ans.begin(), ans.end());
//     return ans;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     vector<int> vec;
//     vec = {1, 2, 3, 4};
//     vector<vector<int>> res = subsets(vec);

//     for (int i = 0; i < res.size(); i++)
//     {
//         for (int j = 0; j < res[i].size(); j++)
//         {
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Subset Sum Problem
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// bool helper(vector<int> &v, int sum, int temp, int i)
// {
//     if (sum == temp)
//         return 1;
//     if (i >= v.size())
//         return 0;

//     int rec_call1 = helper(v, sum, temp + v[i], i + 1);
//     int rec_call2 = helper(v, sum, temp, i + 1);
//     return rec_call1 || rec_call2;
// }
// bool is_sum(vector<int> &vecc, int summ)
// {
//     return helper(vecc, summ, 0, 0);
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     vector<int> vic = {1, 2, 3, 4, 5, 6};
//     int sum = 9;
//     cout << is_sum(vic, sum);
//     return 0;
// }

// Permutations
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// vector<vector<int>> vec;
// void helper(vector<int> &nums, int i)
// {
//     if (i == nums.size())
//     {
//         vec.push_back(nums);
//         return;
//     }
//     for (int j = i; j < nums.size(); j++)
//     {
//         swap(nums[i], nums[j]);
//         helper(nums, i + 1);
//         //Backtracking
//         swap(nums[i], nums[j]);
//     }
//     return;
// }
// vector<vector<int>> permute(vector<int> &nums)
// {
//     helper(nums, 0);
//     return vec;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     vector<vector<int>> res;
//     vector<int> v = {1, 2, 3};
//     res = permute(v);
//     for (int i = 0; i < res.size(); i++)
//     {
//         cout << "[ ";
//         for (int j = 0; j < res[i].size(); j++)
//         {
//             cout << res[i][j] << " ";
//         }
//         cout << "]";
//         cout << endl;
//     }
//     return 0;
// }

// KEYPAD PROBLEM
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
// vector<string> ans;
// void helper(vector<int> &a, string temp, int i)
// {
//     if (i == a.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     for (int j = 0; j < keys[a[i]].size(); j++)
//     {
//         helper(a, temp + keys[a[i]][j], i + 1);
//     }
// }
// vector<string> possible_words(vector<int> &a, int n)
// {
//     helper(a, "", 0);
//     return ans;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     vector<int> v = {2, 3, 4};
//     int n = v.size();
//     vector<string> vec;
//     vec = possible_words(v, n);
//     for (string i : vec)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

//**************Backtracking******************

// Combination Sum
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// vector<vector<int>> ans;
// void helper(vector<int> &candidates, int target, int i, int sum, vector<int> temp)
// {
//     if (sum > target)
//         return;
//     if (i == candidates.size())
//     {
//         if (sum == target)
//         {
//             ans.push_back(temp);
//         }
//         return;
//     }
// Inclusion
//     sum += candidates[i];
//     temp.push_back(candidates[i]);
//     helper(candidates, target, i, sum, temp);
//     sum -= candidates[i];
//     temp.pop_back();
// Exclusion
//     helper(candidates, target, i + 1, sum, temp);
// }
// vector<vector<int>> combinationSum(vector<int> &candidates, int target)
// {
//     vector<int> temp;
//     helper(candidates, target, 0, 0, temp);
//     return ans;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     vector<vector<int>> res;
//     vector<int> v = {2, 3, 6, 7};
//     int target = 7;
//     res = combinationSum(v, target);
//     for (int i = 0; i < res.size(); i++)
//     {
//         cout << "[ ";
//         for (int j = 0; j < res[i].size(); j++)
//         {
//             cout << res[i][j] << " ";
//         }
//         cout << "]";
//         cout << endl;
//     }

//     return 0;
// }

//****************** N-Queens*******************
#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;
vector<vector<int>> ans;

bool isSafe(vector<vector<int>> &board, int r, int c, int n)
{
    for (int i = 0; i < r; i++)
    {
        if (board[i][c] == 1)
        {
            return false;
        }
    }
    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }
    return true;
}
void helper(vector<vector<int>> &board, int n, int r)
{
    if (r == n)
    {
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 1)
                {
                    temp.push_back(j + 1);
                }
            }
        }
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (isSafe(board, r, i, n))
        {
            board[r][i] = 1;
            helper(board, n, r + 1);
            board[r][i] = 0;
        }
    }
}
vector<vector<int>> nQueen(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));
    helper(board, n, 0);
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> ans = nQueen(n);
    if (ans.size() == 0)
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "[";
            for (int u : ans[i])
                cout << u << " ";
            cout << "]";
        }
        cout << endl;
    }

    return 0;
}