#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string p, q;
        cin >> p >> q;

        unordered_map<char, int> freq1, freq2;
        for (char ch : p) freq1[ch]++;
        for (char ch : q) freq2[ch]++;

        bool possible = true;

        for (auto& pair : freq2) {
            char ch = pair.first;
            if (freq1[ch] < freq2[ch]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            for (char ch = 'a'; ch <= 'z'; ch++) {
                int rem = freq1[ch] - freq2[ch];
                if (ch == 's' || ch == 'i' || ch == 'x') {
                    if (rem != 1) {
                        possible = false;
                        break;
                    }
                } else {
                    if (rem != 0) {
                        possible = false;
                        break;
                    }
                }
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}