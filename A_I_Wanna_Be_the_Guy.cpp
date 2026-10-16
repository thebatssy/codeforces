#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, q, ele;
    cin >> n >> p;

    vector<bool> present(n+1, false);
    for (int i = 0; i < p; i++){
        cin >> ele;
        present[ele] = true;
    }

    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> ele;
        present[ele] = true;
    } 

    bool notAll = false;
    for (int i = 1; i <= n; i++){
        if (!present[i]){
            notAll = true;
            break;
        }
    }

    cout << (notAll ? "Oh, my keyboard!" : "I become the guy.") << "\n";

    return 0;
}