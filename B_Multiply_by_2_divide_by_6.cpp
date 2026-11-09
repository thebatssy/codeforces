#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        long long n;
        cin >> n;

        long long cnt = 0;

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
                cnt++;
            }
            else if (n % 3 == 0) {
                n *= 2;
                cnt++;
            }
            else break;
        }

        cout << (n == 1 ? cnt : -1) << "\n";
    }

    return 0;
}