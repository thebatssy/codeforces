#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(int num){
    if (num == 1) return false;
    for (int i = 2; i < num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

int getNextPrime(int num){
    num++;
    while (!isPrime(num)) num++;
    return num;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    cout << (getNextPrime(n) == m ? "YES\n" : "NO\n");

    return 0;
}