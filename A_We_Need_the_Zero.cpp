#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            total ^= a[i];
        } 

        if (n % 2 == 0){
            cout << (total == 0 ? 0 : -1) << "\n";
        }
        else {
            cout << total << "\n";
        }

    }

    return 0;
}