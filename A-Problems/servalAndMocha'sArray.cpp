#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void solve(){
    int n, i, j, result, minimum;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    minimum = gcd(a[0], a[1]);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            result = gcd(a[i], a[j]);
            if( j!=i && minimum > result){
                minimum = result;
            }
        }
    }
    if(minimum > 2){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t>0){
        solve();
        t--;
    }
    return 0;
}
