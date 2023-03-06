#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x, y, n, k;
    cin >> x >> y >> n;
    k = (n-y)/x;
	cout << k*x+y << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
