#include <iostream>
#include <string>

using namespace std;
int i=0;
int counter(int number){
    if(number >= 5){
            i++;
        number -=5;
        return counter(number);
    }else if(number == 4){
        i++;
        number -=4;
        return counter(number - 4);
    }else if(number == 3){
        i++;
        number -=3;
        return counter(number - 3);
    }else if(number == 2){
        i++;
        number -=2;
        return counter(number);
    }else if(number == 1){
        i++;
        return i;
    }
}
int main() {
    int integer, ctr = 0;
    cin >> integer;
    if(integer <1 || integer > 1000000)
        return 0;
    ctr = counter(integer);
    cout << i << endl;
    return 0;
}
