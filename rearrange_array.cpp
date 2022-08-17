// #include <bits/stdc++.h>
// using namespace std;

// void rearrange(int arr[], int n)
// {
//     int i, j, temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == i)
//             {
//                 temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//                 break;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != i)
//         {
//             arr[i] = -1;
//         }
//     }
//     for (int j = 0; j < n; j++)
//     {
//         cout << arr[j] << " ";
//     }
// }
// int main()
// {
//     int n, ar[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
//     n = sizeof(ar) / sizeof(ar[0]);

//     rearrange(ar, n);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[] ,int n){
    unordered_set<int>s;
    for(int i=0 ; i<n ; i++){
        if(arr[i] != -1){
            s.insert(arr[i]);
        }
    }
    for(int i=0 ; i<n ; i++){
        if(s.find(i) != s.end()){
            arr[i] = i;
        }
        else{
            arr[i] = -1;
        }
    }
}

int main()
{
 int arr[] {-1, -1, 6, 1, 9,
          3, 2, -1, 4,-1};
  int n = sizeof(arr) / sizeof(arr[0]);
   
  // Function Call
  rearrange(arr, n);
   
  // Print output
  for(int i=0; i<n; i++)
    cout << arr[i] << ' ';
    return 0;
}