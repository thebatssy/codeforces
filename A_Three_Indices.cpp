#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;

        vector<ll> p(n);
        for (ll i = 0; i < n; i++) cin >> p[i];

        ll idx = -1;
        for (ll i = 1; i < n-1; i++){
            if (p[i] > p[i-1] && p[i] > p[i+1]){
                idx = i+1;
                break;
            }
        }

        if (idx == -1) cout << "NO\n";
        else cout << "YES\n" << idx - 1 << " " << idx << " " << idx + 1 << "\n";

    }

    return 0;
}