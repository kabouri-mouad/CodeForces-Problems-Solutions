#include<bits/stdc++.h>

using namespace std;

void solve()
{
   int n;
   string s, t, u;
   cin >> n >> s;
   for(int i = 0; i < n; i++) t.push_back(tolower(s[i]));
   for(int i = 0; i < n; i++)
   {
      char curr = t[i];
      u.push_back(curr);
      int j = i;
      while(j < n && t[j] == curr) j++;
      i = j - 1;
   }
   bool f = (u.size() == 4) && (u[0] == 'm') && (u[1] == 'e') && (u[2] =='o') && (u[3] == 'w');
   if(f == false) cout << "NO" << endl;
   else cout << "YES" << endl;


}

int main()
{
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t = 1;
   cin >> t;
   while(t--)
   {
      solve();
   }
}
