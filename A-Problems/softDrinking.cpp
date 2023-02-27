#include <bits/stdc++.h>

using namespace std;
void solve(){
    int  n, k, l, c, d, p, nl, np, ml_drink, slice_lime, salt;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ml_drink = (k*l)/nl;
    slice_lime = c*d;
    salt = p/np;
        cout << min(ml_drink, min(slice_lime, salt))/n  << endl;
}
int main() {
        solve();
    return 0;
}


