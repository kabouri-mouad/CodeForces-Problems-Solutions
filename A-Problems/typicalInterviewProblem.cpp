#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string s, fb_str("FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB");
    cin >> n;
    cin >> s;

    if(fb_str.find(s)!=-1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
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


