#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        int lSum = (s[0]-'0') + (s[1]-'0') + (s[2]-'0');
        int rSum = (s[3]-'0') + (s[4]-'0') + (s[5]-'0');
        cout << (lSum == rSum ? "YES" : "NO") << "\n";
    }

    return 0;
}