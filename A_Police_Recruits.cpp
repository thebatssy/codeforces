#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cnt = 0, free = 0, ele;
    for (int i = 0; i < n; i++){
        cin >> ele;

        if (ele == -1){
            if (free) free -= 1;
            else cnt++;
        }
        else free += ele;
    }

    cout << cnt << "\n";

    return 0;
}