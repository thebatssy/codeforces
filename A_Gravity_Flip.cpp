#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = n-1; i >= 0; i--){
        for (int j = i-1; j >= 0; j--){
            if (a[j] > a[i]){
                int diff = a[j] - a[i];
                a[i] += diff;
                a[j] -= diff;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}