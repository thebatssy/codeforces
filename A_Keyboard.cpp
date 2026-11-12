#include <bits/stdc++.h>
using namespace std;

int getIdx(char ch, string& s1){
    for (int i = 0; i < 30; i++){
        if (s1[i] == ch) return i;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char ch;
    cin >> ch;

    string s;
    cin >> s;

    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string ans;
    for (int i = 0; i < s.size(); i++){
        int idx = getIdx(s[i], s1);
        if (ch == 'L') ans += s1[idx+1];
        else ans += s1[idx-1];
    }

    cout << ans;

    return 0;
}