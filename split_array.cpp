// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v={12,10,5,6,52,36};
//     int a;
//     cout << "a" << endl;
//     cin >> a;
//     int b;
//     cout << "b" << endl;
//     cin >> b;

//     reverse(v.begin() + a, v.end());
//     reverse(v.begin(), v.end());
//     reverse(v.begin() + b, v.end());
//     for (auto val : v)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

void split(int arr[] , int n , int k){
    for(int i=0 ; i<k ; i++){
        int temp = arr[0];
        for(int j=0 ; j<n-1 ; j++){
            arr[j] = arr[j+1];

        }
        arr[n-1] = temp;
    }
    for(int j=0 ; j<n ; j++){
        cout<<arr[j]<<" ";
    }
    
}
int main(){
   int arr[]={12,10,5,6,52,36};
   int n= sizeof(arr)/sizeof(arr[0]);
   int k=2;
   split(arr,n,k); 
    return 0;
}