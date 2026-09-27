#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int minDiff = INT_MAX;
    for (int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        minDiff = min(minDiff, abs(ele));
    }

    cout << minDiff << '\n';

    return 0;
}