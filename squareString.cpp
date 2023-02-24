#include <iostream>
#include <string>

using namespace std;
int main() {
    int t, i, j, val=0;
    string str;
    cin >> t;
    while(t > 0)
    {
        cin >> str;
        for( i=0; i<str.length()/2; i++){
            if(str[i] != str[str.length()/2+i] || str.length()%2 !=0){
                val=1;
            }
        }
        if(val == 1 || str.length() == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        val=0;
        t--;
    }
    return 0;
}

