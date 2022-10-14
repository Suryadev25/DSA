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
