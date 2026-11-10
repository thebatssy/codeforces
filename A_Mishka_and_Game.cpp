#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long mishka = 0, chris = 0;
    for (int i = 0; i < n; i++){
        long long m, c;
        cin >> m >> c;

        if (m > c) mishka++;
        if (c > m) chris++;
    }

    if (mishka > chris) cout << "Mishka" << "\n";
    else if (mishka < chris) cout << "Chris" << "\n";
    else cout << "Friendship is magic!^^" << "\n";

    return 0;
}