#include <bits/stdc++.h>
 
 
using namespace std;
#define ll long long
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    string s;cin>>s;
    int n=s.size();
    int L = 0, U = 0;
    for (int i = 0;i<n;i++) {
        if (islower(s[i])) L++;
        else U++;
    }
    if(U>L) {
        for (int i = 0;i<n;i++) {
            s[i] = toupper(s[i]);
        }   
    }
    else {
        for (int i = 0;i<n;i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}