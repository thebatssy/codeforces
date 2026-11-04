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

        long long total = 0;
        unordered_set<long long> s;
        for (long long i = l; i <= r; i++){
            total += i;
            s.insert(i);
        } 
        long long totalTemp = total;
        unordered_set<long long> sTemp(s);

        long long leftOps = 0;
        for (long long i = r; i >= l; i--){
            if (s.count(total)) break;
            total -= i;
            s.erase(i);
            leftOps++;
        }

        if (leftOps == 0){
            cout << 0 << "\n";
            continue;
        }

        long long rightOps = 0;
        for (long long i = l; i <= r; i++){
            if (sTemp.count(totalTemp)) break;
            totalTemp -= i;
            sTemp.erase(i);
            rightOps++;
        }

        cout << min(leftOps, rightOps) << "\n";
    }

    return 0;
}