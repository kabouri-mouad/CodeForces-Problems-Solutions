#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, max_idx, min_idx, max_height, min_height;
    cin >> n;
    int heights[n];
    for(int i(0); i<n; i++){
        cin >> heights[i];
    }
    max_idx = 0;
    min_idx = 0;
    min_height = heights[0];
    max_height = heights[0];
    for(int i(0); i<n; i++){
        if(max_height < heights[i]){
            max_height = heights[i];
            max_idx = i;
        }
        if(min_height >= heights[i]){
            min_height = heights[i];
            min_idx = i;
        }
    }
    if(max_idx > min_idx)
       cout << max_idx+(n-min_idx-2) << endl;
    else
        cout << max_idx+(n-min_idx-1) << endl;
    return 0;
}
