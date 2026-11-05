#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];

    long long maxLen = 1, currLen = 1;
    for (long long i = 1; i < n; i++){
        if (a[i] >= a[i-1]) currLen++;
        else currLen = 1;
        maxLen = max(maxLen, currLen);
    }

    cout << maxLen;

    return 0;
}