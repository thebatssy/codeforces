#include <bits/stdc++.h>
using namespace std;

vector<int> par(26);
int findUPar(int v){
    if (v == par[v]) return v;
    return par[v] = findUPar(par[v]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        string s;
        cin >> n >> s;

        for (int i = 0; i < 26; i++) par[i] = i;

        int ops = 0;
        for (int i = 0; i < n/2; i++){
            int u = s[i] - 'a';
            int v = s[n-1-i] - 'a';

            while (true){
                u = findUPar(u);
                v = findUPar(v);
                if (u == v) break;

                if (u < v) swap(u, v);
                par[u] = findUPar(u-1);
                ops++;
            }
        }

        cout << ops << "\n";

    }

    return 0;
}