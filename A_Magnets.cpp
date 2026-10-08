#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> mags(n);
    for (int i = 0; i < n; i++) cin >> mags[i];

    int cnt = 1;
    for (int i = 1; i < n; i++){
        if (mags[i-1][1] == mags[i][0]) cnt++;
    }

    cout << cnt << "\n";

    return 0;
}