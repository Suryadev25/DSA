#include<iostream>
using namespace std;

void Rotate_by_one(int arr[] , int n){
    int temp = arr[0];
    for(int i=0 ; i<n ; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
void Rotate(int arr[] , int d , int n){
    for(int i=0 ; i<d ; i++){
      Rotate_by_one(arr , n);
    }
}
void Print(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    Rotate(arr , 2  , 7);
    Print(arr , 7);
    return 0;
}

// ********************************** 

//************************Method 2 ****************************************

// #include <bits/stdc++.h>
// using namespace std;

// void Print(int arr[], int size);
// void swap(int arr[], int fi, int si, int d);
// void Rotate_left(int arr[], int d, int n)
// {
//     if (d == 0 || d == n)
//     {
//         return;
//     }
//     if (n - d == d)
//     {
//         swap(arr, 0, n - d, d);
//         return;
//     }
//     if (d < n - d)
//     {
//         swap(arr, 0, n - d, d);
//         Rotate_left(arr, d, n - d);
//     }
//     else{
//         swap(arr , 0 , d , n-d);
//         Rotate_left(arr + n- d , 2*d - n , d);
//     }
// }
// void Rotate_left(int arr[], int d, int n)
// {
//     int i, j;
//     if (d == 0 || d == n)
//         return;
         
//     i = d;
//     j = n - d;
//     while (i != j)
//     {
//         if (i < j) /*A is shorter*/
//         {
//             swap(arr, d - i, d + j - i, i);
//             j -= i;
//         }
//         else /*B is shorter*/
//         {
//             swap(arr, d - i, d, j);
//             i -= j;
//         }
        
//     }

//     swap(arr, d-i , d ,i);
// }
    
// void Print(int arr[] , int size){
//     for(int i=0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void swap(int arr[] , int fi , int si , int d){
//     int i , temp;
//     for(int i=0 ; i<d ; i++){
//         temp = arr[fi+i];
//         arr[fi + i ] = arr[si + i];
//         arr[si +i ] = temp;
//     }
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7};
//     Rotate_left(arr , 2 ,7);
//     Print(arr , 7);

//     return 0;
// }
