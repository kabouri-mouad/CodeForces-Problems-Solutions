#include <iostream>
#include <string>

using namespace std;
int main() {
    int t, n,i, j, l = 0, h=0;
    cin >> t;
    if(t < 1 or t > 1000) return 0;

    for(i = 0; i < t; i++){
        cin >> n;
        if(n < 1 or n > 50){
            return 0;
        }
        char direction[n];
        cin >> direction;
        for(j = 0; j < n; j++){
            if(direction[j] == 'U'){
                ++h;
            }else if(direction[j] == 'R'){
                ++l;
            }else if(direction[j] == 'D'){
                --h;
            }else if(direction[j] == 'L'){
                --l;
            }else{}
            if(l == 1 and h == 1){
                cout << "YES" << endl;
                break;
            }
        }
        if(j == n){
            cout << "NO" << endl;
        }
        n = 0;
        l = 0;
        h = 0;
        direction[0] = '\0';
    }
    return 0;
}
