#include <bits/stdc++.h>
using namespace std;

bool isValid(int num){
    unordered_set<int> st;

    while (num){
        int dig = num % 10;
        num /= 10;

        if (st.count(dig)) return false;
        st.insert(dig);
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int num = n+1;

    while (!isValid(num)) num++;

    cout << num << "\n";

    return 0;
}