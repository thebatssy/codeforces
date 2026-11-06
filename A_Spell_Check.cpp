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

        string s;
        cin >> s;

        unordered_map<char,int> freq;
        bool ans = true;
        for (char ch: s){
            if (ch == 'T' || ch == 'i' || ch == 'm' || ch == 'u' || ch == 'r') freq[ch]++;
            else {
                ans = false;
                break;
            }
        } 
        if (!ans){
            cout << "NO" << "\n";
            continue;
        }

        ans = (freq['T'] == 1 && freq['i'] == 1 && freq['m'] == 1 && freq['u'] == 1 && freq['r'] == 1);
        cout << (ans ? "YES" : "NO") << "\n";
    }

    return 0;
}