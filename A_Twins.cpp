#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    long long totalSum = accumulate(a.begin(), a.end(), 0);
    long long cnt = 0, currSum = 0;

    for (int i = 0; i < n; i++){
        currSum += a[i];
        cnt++;
        if (2*currSum > totalSum) break;
    }

    cout << cnt << "\n";

    return 0;
}