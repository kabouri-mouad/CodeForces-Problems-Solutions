#include <iostream>

using namespace std;
int main() {
    int n, numberGroup=0;
    cin >> n;
    int tab[n];
    for(int i(0); i<n; i++){
        cin >> tab[i];
    }
    for(int i(0); i<n-1; i++){
        if(tab[i] != tab[i+1]){
            numberGroup++;
        }
    }
    numberGroup++;
    cout << numberGroup << endl;
    return 0;
}
