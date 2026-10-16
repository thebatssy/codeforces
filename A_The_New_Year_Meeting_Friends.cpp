#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int mini = min(x1, min(x2, x3));
    int maxi = max(x1, max(x2, x3));

    int ans = INT_MAX;
    for (int i = mini; i <= maxi; i++){
        ans = min(ans, abs(x1-i) + abs(x2-i) + abs(x3-i));
    }

    cout << ans;

    return 0;
}