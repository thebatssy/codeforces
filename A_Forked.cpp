#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        long long a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        unordered_set<string> s;
        s.insert(to_string(xk-a)+"#"+to_string(yk-b));
        s.insert(to_string(xk-a)+"#"+to_string(yk+b));
        s.insert(to_string(xk+a)+"#"+to_string(yk-b));
        s.insert(to_string(xk+a)+"#"+to_string(yk+b));
        s.insert(to_string(xk-b)+"#"+to_string(yk-a));
        s.insert(to_string(xk-b)+"#"+to_string(yk+a));
        s.insert(to_string(xk+b)+"#"+to_string(yk-a));
        s.insert(to_string(xk+b)+"#"+to_string(yk+a));

        long long cnt = 0;
        if (s.erase(to_string(xq-a)+"#"+to_string(yq+b))) cnt++;
        if (s.erase(to_string(xq-a)+"#"+to_string(yq-b))) cnt++;
        if (s.erase(to_string(xq+a)+"#"+to_string(yq-b))) cnt++;
        if (s.erase(to_string(xq+a)+"#"+to_string(yq+b))) cnt++;
        if (s.erase(to_string(xq-b)+"#"+to_string(yq-a))) cnt++;
        if (s.erase(to_string(xq-b)+"#"+to_string(yq+a))) cnt++;
        if (s.erase(to_string(xq+b)+"#"+to_string(yq-a))) cnt++;
        if (s.erase(to_string(xq+b)+"#"+to_string(yq+a))) cnt++;

        cout << cnt << "\n";

    }

    return 0;
}