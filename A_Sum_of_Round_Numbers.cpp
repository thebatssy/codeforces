#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;
        int pow = 1;

        while (n) {
            int dig = n % 10;
            if (dig) ans.push_back(dig*pow);

            pow *= 10;
            n /= 10;
        }

        cout << ans.size() << '\n';
        for (int x : ans) cout << x << ' ';
        cout << '\n';
    }

    return 0;
}