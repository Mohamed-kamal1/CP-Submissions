#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n;cin>>n;
    int arr[n];
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans += abs(arr[i]);
    }
    cout<< ans;
 
 
 
    return 0;
}