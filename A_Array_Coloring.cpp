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

        vector<int> arr(n);
        int total = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            total += arr[i];
        }

        bool found = false;
        for (int ele: arr){
            if ((total-ele) % 2 == ele % 2) {
                found = true;
                break;
            }
        }

        if (found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}