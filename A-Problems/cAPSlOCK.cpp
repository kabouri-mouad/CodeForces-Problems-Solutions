#include <bits/stdc++.h>

using namespace std;
void solve()
{
   string str;
   cin >> str;
   int i=1;
   if((int)str[0] > 96)
   {
        if(str.length() == 1)
        {
            cout << (char)((int)str[0]-32) << endl;
        }else{
            while((i < str.length()) && ((int)str[i]) < 91)
            {
                i++;
            }
            if(i == str.length())
            {
                cout << (char)((int)str[0]-32);
                for(i=1; i<str.length(); i++)
                {
                        cout << (char)((int)str[i]+32);
                }
            }else{
                cout << str << endl;
            }
        }
   }else{
        if(str.length() == 1)
        {
            cout << (char)((int)str[0]+32) << endl;
        }else{
            while((i < str.length()) && ((int)str[i]) < 91)
            {
                i++;
            }
            if(i == str.length())
            {
                for(i=0; i<str.length(); i++)
                {
                        cout << (char)((int)str[i]+32);
                }
            }else{
                cout << str << endl;
            }
        }
   }
}
int main() {
    solve();
    return 0;
}
