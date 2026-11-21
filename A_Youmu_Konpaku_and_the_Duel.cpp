#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int getNet(int j, int i){
    int jeff = i+1;
    if (j > jeff) return jeff*(jeff+1)/2 + (j-jeff);
    return (2*i*j - j*j + 3*j)/2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int x;
        cin >> x;

        int ans = x;
        for (int i = 1; i < x; i++){ // charge i times
            int st = 1, end = x;
            while (st <= end){
                int mid = st + (end-st)/2;
                if (getNet(mid, i) >= x){
                    ans = min(ans, i+mid);
                    end = mid-1;
                }
                else st = mid+1;
            }
        }

        cout << ans << "\n";

    }

    return 0;
}