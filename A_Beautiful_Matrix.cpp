#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ele, row, col;

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            cin >> ele;
            if (ele == 1) row = i, col = j;
        }
    }

    int ans = abs(row-3) + abs(col-3);
    cout << ans << "\n";

    return 0;
}