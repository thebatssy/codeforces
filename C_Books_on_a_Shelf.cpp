#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        long long n;
        cin >> n;

        vector<long long> h(n);
        for (long long i = 0; i < n; i++) cin >> h[i];

        sort(h.begin(), h.end());
        int cnt = 1;
        vector<long long> first, second;
        first.push_back(h[0]);

        for (int i = 1; i < n; i++){
            if (h[i] > h[i-1]){
                first.push_back(h[i]);
                cnt++;
            }
            else second.push_back(h[i]);
        }

        if (cnt == n){
            cout << cnt << "\n";
            for (int i = 0; i < n; i++) cout << h[i] << " ";
            cout << "\n";
            continue;
        }

        cnt++;
        for (int i = 1; i < second.size(); i++){
            if (second[i] > second[i-1]) cnt++;
        }

        cout << cnt << "\n";
        for (int i = 0; i < first.size(); i++) cout << first[i] << " ";
        for (int i = second.size()-1; i >= 0; i--) cout << second[i] << " ";
        cout << "\n";

    }

    return 0;
}