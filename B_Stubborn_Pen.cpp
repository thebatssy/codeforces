#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        long long n;
        string s;
        cin >> n >> s;

        char col = 'R';
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (s[i] != col) cnt++;
            else col = (s[i] == 'R') ? 'B' : 'R';
        }

        cout << cnt << "\n";
    }

    return 0;
}