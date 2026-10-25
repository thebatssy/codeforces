#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> x(4);
    for (int i = 0; i < 4; i++) cin >> x[i];

    sort(x.begin(), x.end());

    cout << x[3] - x[0] << " " 
         << x[3] - x[1] << " " 
         << x[3] - x[2] << "\n";

    return 0;
}