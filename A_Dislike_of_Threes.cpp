#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool good(int num){
    if (num % 3 == 0 || num % 10 == 3) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        ll k;
        cin >> k;

        
        ll cnt = 0, num = 1;
        while (true){
            if (good(num)){
                cnt++;
                if (cnt == k){
                    cout << num << '\n';
                    break;
                }
            }
            num++;
        }
    }

    return 0;
}