#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<int,int> freq;
        for (int x: a) freq[x]++;

        int ans;
        for (int i = 0; i < n; i++){
            if (freq[a[i]] == 1){
                ans = i+1;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}