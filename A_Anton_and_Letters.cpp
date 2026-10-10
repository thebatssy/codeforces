#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    for (char &ch: s){
        if (ch == '{' || ch == '}' || ch == ',') ch = ' ';
    }

    stringstream ss(s);
    unordered_set<char> st;
    char token;

    while (ss >> token){
        st.insert(token);
    }

    cout << (int)st.size() << endl;
}