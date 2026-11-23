#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string res;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '.') res += "0";
        else {
            if (s[i+1] == '.') res += "1";
            else res += "2";
            i++;
        }
    }

    cout << res;

    return 0;
}