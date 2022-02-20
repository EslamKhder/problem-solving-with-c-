#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
ll fac(ll n, ll r) {
    ll res = 1; ll temp = 2;
    for (ll i = r + 1; i <= n; i++) {
        res *= i; 
        if (temp <= n - r && res % temp == 0) {
            res /= temp; temp++;
        }
    }
    return res;
}
int main()
{ 
        ll n, r;
        cin >> n >> r;
        if (r > n)cout << 0;
        else cout << fac(n, r);
 
}
