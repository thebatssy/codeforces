#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x = 0;

    while (n--){
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == '+'){
                x++;
                break;
            }
            else if (s[i] == '-'){
                x--;
                break;
            }
        }
    }

    cout << x << '\n';

    return 0;
}