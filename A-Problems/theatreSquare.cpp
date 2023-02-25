#include <iostream>

using namespace std;
int main() {
        long long n, m, a, width, height;
        cin >> n >> m >> a;
        width = n/a;
        if( n%a > 0){
            width++;
        }
        height = m/a;
        if( m%a > 0){
            height++;
        }
        cout << width*height << endl;
        return 0;
}
