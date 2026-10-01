#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> ans(n);
    int ele;
    for (int i = 0; i < n; i++){
        cin >> ele;
        ans[ele-1] = i+1;
    }

    for (int i = 0; i < n; i++) cout << ans[i] << " ";

    return 0;
}