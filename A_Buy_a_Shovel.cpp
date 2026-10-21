#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, r;
    cin >> k >> r;

    int shovels = 1;
    while (true){
        int price = k*shovels;
        if (price == (price/10)*10) break;
        if (price == (price/10)*10 + r) break;
        shovels++;
    }

    cout << shovels;

    return 0;
}