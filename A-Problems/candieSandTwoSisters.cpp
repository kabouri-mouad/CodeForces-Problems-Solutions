#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n == 1 || n == 2){
        cout << 0 << endl;
    }else if(n%2 != 0){
        cout << (n/2) << endl;
    }else{
        cout << (n/2) - 1 << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

