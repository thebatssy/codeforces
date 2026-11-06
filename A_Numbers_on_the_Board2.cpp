#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        long long l, r;
        cin >> l >> r;

        if (l+r == 0){
            cout << 0 << "\n";
            continue;
        }

        if ((l >= 0 && r > 0) or (l < 0 && r <= 0)){
            if (l == 0 || r == 0)  cout << r - l - 1 << "\n";
            else cout << r - l << "\n";
        }
        else {
            cout << r-l-1-2*min(abs(l), abs(r)) << "\n";
        }
    }

    return 0;
}