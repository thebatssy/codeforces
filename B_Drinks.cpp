#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ele;
    cin >> n;

    double sum = 0.0;
    for (int i = 0; i < n; i++){
        cin >> ele;
        sum += (double)ele/100.0;
    }

    double ans = (sum/(1.0*n))*100;
    cout << ans << "\n";

    return 0;
}