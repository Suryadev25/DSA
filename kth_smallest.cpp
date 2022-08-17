#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"n"<<endl;
    cin >> n;
    int a[n];
    cout<<"a[n]"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout<<"k"<<endl;
    cin >> k;
    sort(a, a + n);
    cout << a[k - 1] << endl;
    return 0;
}