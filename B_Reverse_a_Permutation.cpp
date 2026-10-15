#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        
        int st = 0, biggest = n;
        for (int i = 0; i < n; i++){
            if (i == n-p[i]){
                st++;
                biggest--;
            }
            else break;
        }

        if (st == n){
            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << "\n";
            continue;
        }

        int pos = find(p.begin(), p.end(), biggest) - p.begin();
        while (pos == n-biggest){
            biggest--;
            pos = find(p.begin(), p.end(), biggest) - p.begin();
            st++;
        }
    
        reverse(p.begin()+st, p.begin()+pos+1);
    
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";

    }

    return 0;
}