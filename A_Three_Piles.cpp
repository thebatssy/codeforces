#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        long long a, b, c;
        cin >> a >> b >> c;

        vector<long long> vec;
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);

        sort(vec.begin(), vec.end());

        bool flag = false;
        for (int i = 1; i < 3; i++){
            if (vec[i] != vec[i-1]+1){
                flag = true;
                break;
            }
        }

        cout << (flag ? "NO" : "YES") << "\n";

    }

    return 0;
}