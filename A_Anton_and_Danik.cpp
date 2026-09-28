#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int a = 0;
    for (char ch: s){
        if (ch == 'A') a++;
    }

    if (2*a > n) cout << "Anton" << "\n";
    else if (2*a < n) cout << "Danik" << "\n";
    else cout << "Friendship" << "\n";

    return 0;
}