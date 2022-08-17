#include<bits/stdc++.h>
using namespace std;

    void left_rotate(int arr[], int k , int n){

        rotate(arr , arr+(k%n) , arr+n);
        for(int i=0 ; i<n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
int main(){
int arr[]={1,3,5,7,9};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 2;

left_rotate(arr , k , n);
    return 0;
}