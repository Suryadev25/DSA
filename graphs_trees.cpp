//****************** Representation *************************
// Methods :- Adjancency Matrix  | Adjancency List

// ****************Adjancency Matrix*****************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// const int N = 1e3 + 10;
// int graph[N][N];
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < m; i++)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         graph[v1][v2] = 1;
//         graph[v2][v1] = 1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << graph[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // O(N^2) - space complexity (drawback)

//     return 0;
// }

// ******************Adjancency List**********************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// const int N = 1e3 + 10;
// vector<int> graph[N];

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n, m;
//     cin >> n >> m;
//     int v1, v2;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> v1 >> v2;
//         graph[v1].push_back(v2);
//         graph[v2].push_back(v1);
//     }
//     // O(N+M) - Space Complexity
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"vertex "<<i<<"is connected to";
//         cout << "\nhead";
//         for (auto x : graph[i])
//         {
//             cout << "-> " << x;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//***************DFS*******************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// const int N = 1e5 + 10;
// // bool vis[N];
// void DFS(int vertex, vector<int> &vis, vector<int> g[], vector<int> &storeDfs)
// {
//     // Take action on [vertex after entering] the vertex
//     storeDfs.push_back(vertex);
//     vis[vertex] = 1;
//     for (auto x : g[vertex])
//     {
//         // // cout << "p" << vertex << "c" << x << endl;

//         // Take action on [child before entering] the child node
//         if (vis[x] == 0)
//             DFS(x, vis, g, storeDfs);
//         // Take action on [child after exiting] the child node
//     }
//     // Take action on [vertex before exiting] the vertex
// }

// vector<int> dfs_graph(int V, vector<int> g[])
// {
//     vector<int> storeDfs;
//     vector<int> vis(V, 0);
//     for (int i = 0; i < V; i++)
//     {
//         if (vis[i] == 0)
//         {
//             DFS(i, vis, g, storeDfs);
//         }
//     }
//     return storeDfs;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n, m;
//     cin >> n >> m;
//     vector<int> g[N];
//     for (int i = 0; i < m; i++)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     vector<int> ans = dfs_graph(n, g);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//*************Connected Components************************

// --> Adjancency List
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// const int N = 1e5 + 10;
// vector<int> g[N];
// bool vis[N];
// vector<vector<int>> cc;
// vector<int> current;
// void dfs(int vertex)
// {
//     vis[vertex] = true;
//     current.push_back(vertex);
//     for (auto x : g[vertex])
//     {
//         if (vis[x] == 0)
//         {
//             dfs(x);
//         }
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     int count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (vis[i] == 0)
//         {
//             current.clear();
//             dfs(i);
//             count++;
//             cc.push_back(current);
//         }
//     }
//     cout << count << endl;
//     for (auto x : cc)
//     {
//         for (auto i : x)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// --> Adjancency Matrix
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// void DFS(int vertex, vector<int> g[], vector<int> &vis)
// {
//     vis[vertex] = 1;
//     for (auto x : g[vertex])
//     {
//         if (vis[x] == 0)
//             DFS(x, g, vis);
//     }
// }
// int numProvinces(vector<vector<int>> adj, int V)
// {
//     vector<int> g[V];
//     vector<int> vis(V, 0);
//     int count = 0;
//     for (int i = 0; i < V; i++)
//     {
//         for (int j = 0; j < V; j++)
//         {
//             if (adj[i][j] == 1 && i != j)
//             {
//                 g[i].push_back(j);
//                 g[j].push_back(i);
//             }
//         }
//     }
//     for (int i = 0; i < V; i++)
//     {
//         if (vis[i] == 0)
//         {
//             DFS(i, g, vis);
//             count++;
//         }
//     }
//     return count;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n, m;
//     cin >> n;
//     vector<vector<int>> adjj;
//     for (int i = 0; i < n; i++)
//     {
//         vector<int> temp;
//         for (int j = 0; j < n; j++)
//         {
//             int x;
//             cin >> x;
//             temp.push_back(x);
//         }
//         adjj.push_back(temp);
//     }
//     cout << numProvinces(adjj, n);
//     return 0;
// }

//**************** Cycle Detection *********************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// bool DFS(int vertex, int parent, vector<int> g[], bool vis[])
// {
//     vis[vertex] = true;
//     bool check_loop = false;
//     for (auto x : g[vertex])
//     {
//         if (vis[x] == 1 && x == parent)
//             continue;
//         if (vis[x] == 1 && x != parent)
//             return true;
//         check_loop |= DFS(x, vertex, g, vis);
//     }
//     return check_loop;
// }
// bool is_cycle(int vertex, vector<int> g[])
// {
//     bool vis[vertex + 10];
//     bool check_loop = false;
//     for (int i = 0; i < vertex; i++)
//     {
//         vis[i] = 0;
//     }
//     for (int i = 0; i < vertex; i++)
//     {
//         if (vis[i])
//             continue;
//         if (DFS(i, 0, g, vis))
//         {
//             check_loop = true;
//             break;
//         }
//     }
//     return check_loop;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n, m;
//     cin >> n >> m;
//     vector<int> g[n];
//     for (int i = 0; i < m; i++)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     bool ans = is_cycle(n, g);
//     cout << ans << endl;
//     return 0;
// }

// ******************Adjancency Matrix*******************************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// void DFS(int i, int j, int initial, int newcolor, vector<vector<int>> &image)
// {
//     int n = image.size();
//     int m = image[0].size();
//     if (i < 0 || j < 0)
//         return;
//     if (i >= n || j >= m)
//         return;
//     if (image[i][j] != initial)
//         return;

//     image[i][j] = newcolor;

//     DFS(i + 1, j, initial, newcolor, image);
//     DFS(i - 1, j, initial, newcolor, image);
//     DFS(i, j + 1, initial, newcolor, image);
//     DFS(i, j - 1, initial, newcolor, image);
// }
// vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
// {

//     int initial = image[sr][sc];
//     if (initial != color)
//         DFS(sr, sc, initial, color, image);
//     return image;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     // Take Input
//     return 0;
// }

// *********************NO of Islands**********************
// class Solution
// {
// public:
//     void DFS(int i, int j, vector<vector<char>> &grid)
//     {

//         int n = grid.size();
//         int m = grid[0].size();
//         if (i < 0 || j < 0)
//             return;
//         if (i >= n || j >= m)
//             return;
//         if (grid[i][j] != '1')
//             return;

//         grid[i][j] = '0';

//         DFS(i + 1, j, grid);
//         DFS(i - 1, j, grid);
//         DFS(i, j + 1, grid);
//         DFS(i, j - 1, grid);
//         DFS(i+1,j+1,grid);
//         DFS(i-1,j-1,grid);
//         DFS(i-1,j+1,grid);
//         DFS(i+1,j-1,grid);
//     }
//     int numIslands(vector<vector<char>> &grid)
//     {
//         int count = 0;
//         for (int i = 0; i < grid.size(); i++)
//         {
//             for (int j = 0; j < grid[0].size(); j++)
//             {
//                 if (grid[i][j] == '1')
//                 {

//                     DFS(i, j, grid);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

// ***************DFS in A tree (Depth / Height)***************

// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// const int N = 1e5 + 10;
// vector<int> g[N];
// int depth[N], height[N];
// void DFS(int vertex, int parent = 0)
// {
//     for (auto x : g[vertex])
//     {
//         if (x == parent)
//             continue;
//         depth[x] = depth[vertex] + 1;
//         DFS(x, vertex);
//         height[vertex] = max(height[vertex], height[x] + 1);
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     DFS(1);
//     for (int i = 1; i <= n; i++)
//     {
//         cout << depth[i] << " " << height[i] << endl;
//     }
//     return 0;
// }
// *****************Sum of Subtree & Even Count*********************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// const int N = 1e5 + 10;
// vector<int> g[N];
// int sum_subtree[N];
// int even_count[N];

// void DFS(int vertex, int parent = 0)
// {
//     sum_subtree[vertex] += vertex;
//     if (vertex % 2 == 0)
//     {
//         even_count[vertex]++;
//     }
//     for (auto x : g[vertex])
//     {
//         if (x == parent)
//             continue;
//         DFS(x, vertex);
//         even_count[vertex] += even_count[x];
//         sum_subtree[vertex] += sum_subtree[x];
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     DFS(1);
//     for (int i = 1; i <= n; i++)
//     {
//         cout << sum_subtree[i] << " " << even_count[i] << endl;
//     }
//     return 0;
// }
// *********************Diameter of Tree**********************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// const int N = 1e5 + 10;
// vector<int> g[N];
// int depth[N];

// void DFS(int vertex, int parent = 0)
// {
//     for (auto x : g[vertex])
//     {
//         if (x == parent)
//             continue;
//         depth[x] = depth[vertex] + 1;
//         DFS(x, vertex);
//     }
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     int max_dep = -1;
//     int deep = 1;
// for (int i = 1; i <= n; i++)
// {
//     if (max_dep < depth[i])
//     {
//         max_dep = depth[i];
//         deep = i;
//     }
// depth[i] = 0;
// }
// DFS(deep);
// max_dep = -1;
// for (int i = 1; i <= n; i++)
// {
//     if (max_dep < depth[i])
//     {
//         max_dep = depth[i];
//     }
// }
// cout << max_dep << endl;
// return 0;
// }

//********************LCA in Tree*****************************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// const int N = 1e5 + 10;
// vector<int> g[N];
// int par[N];
// void DFS(int vertex, int parent = -1)
// {
//     par[vertex] = parent;
//     for (auto x : g[vertex])
//     {
//         if (x == parent)
//             continue;
//         DFS(x, vertex);
//     }
// }
// vector<int> path(int v)
// {
//     vector<int> ans;
//     while (v != -1)
//     {
//         ans.push_back(v);
//         v = par[v];
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     DFS(1);
//     int p1, p2;
//     cin >> p1 >> p2;
//     vector<int> path_p1 = path(p1);
//     vector<int> path_p2 = path(p2);
//     int len = min(path_p1.size(), path_p2.size());
//     int LCA = -1;
//     for (int i = 0; i < len; i++)
//     {
//         if (path_p1[i] == path_p2[i])
//             LCA = path_p1[i];

//         else
//             break;
//     }
//     cout << LCA << endl;
//     return 0;
// }

//******************Edge Deletion Questions Basic*****************
// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;
// const int N = 1e5 + 9;
// vector<int> g[N];
// int sum_subtree[N];

// void DFS(int vertex, int parent = -1)
// {
//     sum_subtree[vertex] += vertex;
//     for (auto x : g[vertex])
//     {
//         if (x == parent)
//             continue;
//         DFS(x, vertex);
//         sum_subtree[vertex] += sum_subtree[x];
//     }
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     DFS(1);
//     int ans = -1;
//     for (int i = 2; i <= n; i++)
//     {
//         int part1 = sum_subtree[i];
//         int part2 = sum_subtree[1] - part1;
//         ans = max(ans, part1 * part2);
//     }
//     cout << ans << endl;
//     return 0;
// }