#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        ll n;
        string s;
        cin >> n >> s;

        vector<int> seen(26, 0);
        int cnt = 0;
        for (char ch: s){
            if (seen[tolower(ch)-'a']) cnt++;
            else {
                cnt += 2;
                seen[tolower(ch)-'a'] = 1;
            }
        }

        cout << cnt << "\n";

    }

    return 0;
}