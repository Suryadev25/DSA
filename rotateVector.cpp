#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = { 1 ,2 , 3, 4 ,5 , 6 ,7 ,8 , 9};
    for(auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    rotate(vec.begin() , vec.begin()+3, vec.end());
    for(auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}