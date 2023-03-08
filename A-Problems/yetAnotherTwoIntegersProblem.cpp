#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c, tmp, i=10, counter=0;
    cin >> a >> b;
    c = fabs(b - a);
    if(c == 0){
        cout << 0 << endl;
        return;
    }
    while(i>0){
        tmp = c/i;
        if(tmp != 0){
            counter +=tmp;
            c -= tmp*i;
        }
        i--;
    }
    cout << counter << endl;
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

