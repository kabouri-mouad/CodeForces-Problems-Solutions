#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n, days, x, tmp, l, r, mid;
    vector<int> prices;
    cin >> n;
    for(int i(0); i<n; i++){
        cin >> tmp;
        prices.push_back(tmp);
    }
    sort(prices.begin(), prices.end());
    cin >> days;
    for(int i(0); i<days; i++){
        cin >> x;
        l=0;
        r = n-1;
        while(l <= r){
            mid=(l+r)/2;
            if(prices[mid] > x){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout << l << endl;
    }
}
int main() {
    solve();
    return 0;
}
