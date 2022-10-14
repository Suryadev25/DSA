// #include <bits/stdc++.h>
// using namespace std;

// int digits(int n)
// {
//     static int ans = 0;
//     if (n > 0)
//     {
//         ans++;
//         return digits(n / 10);
//     }
//     else
//     {
//         return ans;
//     }
// }

// int main()
// {
//     int ans = digits(8325414);
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
//         cout << "Move disk 1 to " << destination << " from " << source << endl;
//         return;
//     }
//     TowerOfHanoi(n - 1, source, destination, helper);
//     cout << "move disk" << n << " to " << destination << " from " << source << endl;
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
// **********************Practice************************
//****************Fibbonacci or staricase problem***********
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int sum(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return 1;
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

// ****************Palindrome String*********************
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
//     else if (s[start] != s[end])
//     {
//         return -1;
//     }
//     return helper(s, start + 1, end - 1);
// }
// int is_palindrome(string s)
// {
//     return helper(s, 0, s.length() - 1);
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     string s;
//     cin >> s;
//     cout << ((is_palindrome(s) == 1) ? "YES" : "NO");
//     return 0;
// }
// ***************Reverse Array****************

// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// void helper(vector<int> &v, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int temp = v[start];
//     v[start] = v[end];
//     v[end] = temp;
//     helper(v, start + 1, end - 1);
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

//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     helper(v, 0, v.size() - 1);
//     print(v);
//     return 0;
// }
// ******************Subsequences***********************
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
//     vector<string> ans;
//     helper(s, "", 0);
//     return ans;
// }

// int32_t main()
// {
//     string s;
//     cin >> s;
//     Answer(s);
//     return 0;
// }

// ************************Subsets*******************

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

// **************************Subset Sum Problem****************************
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
//     // Take or NotTake
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
//     int sum = 99;
//     cout << is_sum(vic, sum);
//     return 0;
// }

// **********************Permutations*************************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// vector<vector<int>> ans;
// void helper(vector<int> &v, int i)
// {
//     if (i == v.size())
//     {
//         ans.push_back(v);
//         return;
//     }
//     for (int j = i; j < v.size(); j++)
//     {
//         swap(v[i], v[j]);
//         helper(v, i + 1);
//         // Backtracking
//         swap(v[i], v[j]);
//     }
//     return;
// }
// vector<vector<int>> permute(vector<int> &nums)
// {
//     helper(nums, 0);
//     return ans;
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

// **********************KEYPAD PROBLEM****************************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
// vector<string> ans;
// void helper(vector<int> v, string temp, int i)
// {
//     if (i == v.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     for (int j = 0; j < keys[v[i]].size(); j++)
//     {
//         helper(v, temp + keys[v[i]][j], i + 1);
//     }
// }
// vector<string> possible_words(vector<int> &v, int n)
// {
//     helper(v, "", 0);
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

// // ********************************Backtracking *************************************

// // **************************Combination Sum *************************
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
//     // Inclusion
//     sum += candidates[i];
//     temp.push_back(candidates[i]);
//     helper(candidates, target, i, sum, temp);
//     sum -= candidates[i];
//     temp.pop_back();
//     // Exclusion
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
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// vector<vector<int>> ans;

// bool isSafe(vector<vector<int>> &board, int r, int c, int n)
// {
//     for (int i = 0; i < r; i++)
//     {
//         if (board[i][c] == 1)
//         {
//             return false;
//         }
//     }
//     for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//     }
//     for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void helper(vector<vector<int>> &board, int n, int r)
// {
//     if (r == n)
//     {
//         vector<int> temp;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (board[i][j] == 1)
//                 {
//                     temp.push_back(j + 1);
//                 }
//             }
//         }
//         ans.push_back(temp);
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (isSafe(board, r, i, n))
//         {
//             board[r][i] = 1;
//             helper(board, n, r + 1);
//             board[r][i] = 0;
//         }
//     }
// }
// vector<vector<int>> nQueen(int n)
// {
//     vector<vector<int>> board(n, vector<int>(n, 0));
//     helper(board, n, 0);
//     return ans;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     vector<vector<int>> ans = nQueen(n);
//     if (ans.size() == 0)
//         cout << "-1" << endl;
//     else
//     {
//         for (int i = 0; i < ans.size(); i++)
//         {
//             cout << "[";
//             for (auto x : ans[i])
//             {
//                 cout << x << " ";
//             }
//             cout << "]";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//************************Rat in a Maze*************************
//****************Graph Question (DFS)**************************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// vector<string> ans;
// bool issafe(vector<vector<int>> &m, vector<vector<int>> &visited, int n, int srcx, int srcy)
// {
//     if (srcx >= 0 && srcy >= 0 && srcx <= n - 1 && srcy <= n - 1 && visited[srcx][srcy] != 1 && m[srcx][srcy] == 1)
//         return true;
//     return false;
// }
// void helper(vector<vector<int>> &m, vector<vector<int>> &visited, int n, int srcx, int srcy, string temp)
// {
//     if (srcx == n - 1 && srcy == n - 1)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     visited[srcx][srcy] = 1;
//     if (issafe(m, visited, n, srcx + 1, srcy))
//     {
//         helper(m, visited, n, srcx + 1, srcy, temp + "D");
//     }
//     if (issafe(m, visited, n, srcx, srcy - 1))
//     {
//         helper(m, visited, n, srcx, srcy - 1, temp + "L");
//     }
//     if (issafe(m, visited, n, srcx, srcy + 1))
//     {
//         helper(m, visited, n, srcx, srcy + 1, temp + "R");
//     }
//     if (issafe(m, visited, n, srcx - 1, srcy))
//     {
//         helper(m, visited, n, srcx - 1, srcy, temp + "U");
//     }
//     visited[srcx][srcy] = 0;
// }
// vector<string> chooha(vector<vector<int>> &m, int n)
// {
//     vector<vector<int>> visited(n, vector<int>(n, 0));
//     if (m[0][0] == 0)
//         return ans;
//     helper(m, visited, n, 0, 0, "");
//     return ans;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     vector<vector<int>> m;

//     for (int i = 0; i < n; i++)
//     {
//         vector<int> temp;
//         for (int j = 0; j < n; j++)
//         {
//             int x;
//             cin >> x;
//             temp.push_back(x);
//         }
//         m.push_back(temp);
//         temp.clear();
//     }
//     ans = chooha(m, n);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

//*******************************Sudoku Solver***********************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// #define N 9
// bool check(int grid[N][N], int row, int col, int num)
// {
//     for (int i = 0; i < 9; i++)
//     {
//         if (grid[row][i] == num)
//             return false;
//     }
//     for (int i = 0; i < 9; i++)
//     {
//         if (grid[i][col] == num)
//             return false;
//     }
//     int x = row - row % 3;
//     int y = col - col % 3;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (grid[x + i][y + j] == num)
//                 return false;
//         }
//     }
//     return true;
// }
// bool helper(int grid[N][N], int row, int col)
// {
//     if (row == 9)
//         return true;
//     if (col == 9)
//         return helper(grid, row + 1, 0);
//     if (grid[row][col] != 0)
//         return helper(grid, row, col + 1);

//     for (int i = 1; i <= 9; i++)
//     {
//         if (check(grid, row, col, i))
//         {
//             grid[row][col] = i;
//             if (helper(grid, row, col))
//             {
//                 return true;
//             }
//         }
//         grid[row][col] = 0;
//     }
//     return false;
// }
// bool solveSudoku(int grid[N][N])
// {
//     return helper(grid, 0, 0);
// }
// void print(int grid[N][N])
// {
//     solveSudoku(grid);
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9; j++)
//         {
//             cout << grid[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int grid[N][N];
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }
//     print(grid);
//     return 0;
// }