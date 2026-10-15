#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int maxi, mini, score, cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> score;

        if (i == 0) mini = maxi = score;
        else {
            if (score > maxi) cnt++;
            else if (score < mini) cnt++;
            maxi = max(maxi, score);
            mini = min(mini, score);
        }
    }

    cout << cnt;

    return 0;
}