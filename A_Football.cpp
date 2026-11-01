#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool danger = false;
    int consCnt = 1;
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i-1]){
            consCnt++;
            if (consCnt == 7){
                danger = true;
                break;
            }
        }
        else consCnt = 1;
    }

    cout << (danger ? "YES" : "NO") << "\n";
}