#include<iostream>
using namespace std;

void Rotate(int arr[] , int n){
    int temp = arr[n-2];
    for(int i = n-2 ; i>0 ; i--){
        arr[i] = arr[i-1];
    }
        arr[0] = temp;

}

int main(){
 int arr[] = {1,2,3,4,5,6,7,8,9} ;
int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0 ; i<9 ; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;

 Rotate(arr , 9);

    for(int i=0 ; i<9 ; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// vector<int>vec = {1,2,3,4,5,};
// reverse(vec.begin() , vec.end());
// for(auto val : vec){
//     cout<<val<<" ";
// }
// cout<<endl;
// reverse(vec.begin()+1 , vec.end());
// for(auto val : vec){
//     cout<<val<<" ";
// }
// cout<<endl;

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// void cyclic(int arr[] , int n){
//     int i=0 ;
//     int j = n-1;
//     while(i!=j){
//         swap(arr[i] , arr[j]);
//         i++;
//     }
// }
// void print(int arr[] , int n){
//     for(int i=0 ; i<n ; i++){
// cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     cyclic(arr,5);
//     print(arr,5);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// void cyclic(int arr[], int n)
// {
//     int x = arr[n - 1];
//     for (int i = n - 1; i > 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = x;
//     for (int i = 0; i < n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cyclic(arr, n);
//     return 0;
// }