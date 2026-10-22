#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    unordered_set<char> st;
    for (char ch: s){
        if (!st.count(ch)) st.insert(ch);
    }

    if ((int)st.size() % 2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    

    return 0;
}