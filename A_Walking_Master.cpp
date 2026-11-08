#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        int ydiff = d-b;
        if (ydiff < 0){
            cout << -1 << "\n";
            continue;
        }

        int xdiff = a+ydiff-c;
        if (xdiff < 0){
            cout << -1 << "\n";
            continue;
        }

        cout << ydiff+xdiff << "\n";
    }

    return 0;
}