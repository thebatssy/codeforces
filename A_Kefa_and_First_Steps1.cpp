#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];

    long long maxLen = 1, i = 0;
    for (long long j = 0; j < n; j++){
        if (j > 0 && a[j-1] > a[j]) i = j;
        while (a[i] > a[j]) i++;
        maxLen = max(maxLen, j-i+1);
    }

    cout << maxLen;

    return 0;
}