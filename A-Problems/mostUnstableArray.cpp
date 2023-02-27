#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    cout << min(2, n - 1) * m << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
