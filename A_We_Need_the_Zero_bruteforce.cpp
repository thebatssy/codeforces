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

        int ans = -1;
        for (int x = 0; x < 256; x++){
            vector<int> b(n);
            for (int i = 0; i < n; i++) b[i] = a[i] ^ x;
            
            int total = 0;
            for (int i = 0; i < n; i++) total ^= b[i];
            if (total == 0){
                ans = x;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}