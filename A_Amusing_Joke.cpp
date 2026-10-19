#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string g, r, p;
    cin >> g >> r >> p;

    if (g.size()+r.size() != p.size()){
        cout << "NO";
        return 0;
    } 
    
    unordered_map<char,int> mp;
    for (char ch: g) mp[ch]++;
    for (char ch: r) mp[ch]++;

    for (char ch: p){
        if (mp[ch] == 0){
            cout << "NO";
            return 0;
        } 
        mp[ch]--;
    } 

    for (char ch: p){
        if (mp[ch] != 0){
            cout << "NO";
            return 0;
        } 
    }

    cout << "YES";

    return 0;
}