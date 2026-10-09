#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    if (n < 26){
        cout << "NO"; 
        return 0;
    }

    vector<int> freq(26, 0);
    for (char ch: s) {
        ch = tolower(ch);
        freq[ch-'a']++;
    }

    bool pangram = true;
    for (int i = 0; i < 26; i++){
        if (freq[i] == 0){
            pangram = false;
            break;
        }
    }

    cout << (pangram ? "YES" : "NO");

    return 0;
}