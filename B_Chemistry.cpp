#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        long long n, k;
        string s;
        cin >> n >> k >> s;

        unordered_map<char,int> freq;
        for (char ch: s) freq[ch]++;

        long long oddF = 0, evenF = 0;
        for (auto &f: freq){
            if (f.second % 2 == 0) evenF++;
            else oddF++;
        }

        if (k >= oddF-1) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
}