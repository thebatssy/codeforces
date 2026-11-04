#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 3 3 5 7

    long long t;
    cin >> t;

    while (t--){
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int cnt = 0;
        for (int i = 0; i < n; i++){
            int divides = 0;
            for (int j = i+1; j < n; j++){
                if (a[j] % a[i] == 0) divides++;
            }
            cnt = max(cnt, divides);
        }

        cout << n-(cnt+1) << "\n";

    }

    return 0;
}