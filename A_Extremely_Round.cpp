#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long cnt = 0;
        long long base = 1;

        while (base <= n) {
            for (int d = 1; d <= 9; d++) {
                if (d * base <= n) cnt++;
            }
            base *= 10;
        }

        cout << cnt << "\n";
    }
    return 0;
}
