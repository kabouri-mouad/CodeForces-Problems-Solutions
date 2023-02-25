#include <iostream>

using namespace std;
int main() {
    int tab[4], i, j, c, counter=0;
    for(i=0; i<4; i++){
        cin >> tab[i];
    }
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            if(tab[j] > tab[j+1]){
                c = tab[j];
                tab[j] = tab[j+1];
                tab[j+1]=c;
            }
        }
    }
    for(i=0; i<3; i++){
        if(tab[i] == tab[i+1]){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
