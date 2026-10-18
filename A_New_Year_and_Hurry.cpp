#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int i = 1, freeTime = 240-k;

    while (i <= n && freeTime >= 5*i){
        freeTime -= 5*i;
        i++;
    }

    cout << i-1;

    return 0;
}