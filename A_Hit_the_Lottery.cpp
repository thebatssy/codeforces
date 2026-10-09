#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int cnt = 0;
    
    cnt += n/100;
    n %= 100;

    cnt += n/20;
    n %= 20;

    cnt += n/10;
    n %= 10;

    cnt += n/5;
    n %= 5;

    cnt += n;
    n %= 1;

    cout << cnt;

    return 0;
}