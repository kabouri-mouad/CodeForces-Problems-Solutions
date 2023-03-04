#include <bits/stdc++.h>

using namespace std;
void solve(){
   int n;
   cin >> n;
   char str[n];
   cin >> str;
   if(n == 1 || (n == 2 && str[0] != str[1])){
        cout << "YES" << endl;
   }else{
        cout << "NO" << endl;
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
