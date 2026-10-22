#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        bool flag = false;
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (gcd(a[i], a[j]) <= 2){
                    flag = true;
                    break;
                }
            }
        }

        cout << (flag ? "Yes" : "No") << "\n";

    }

    return 0;
}