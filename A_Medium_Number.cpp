#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int a, b, c;
        cin >> a >> b >> c;

        int maxi = max(max(a, b), c);
        int mini = min(min(a, b), c);

        if (a != maxi && a != mini) cout << a << "\n";
        else if (b != maxi && b != mini) cout << b << "\n";
        else cout << c << "\n";
    }

    return 0;
}