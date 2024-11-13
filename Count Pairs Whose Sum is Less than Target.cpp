 ///   ***   ----------   >|*|*|<  \"In the name of ALLAH\"  >|*|*|<  --------   ***   ///   ***   ///

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x)   x.begin(), x.end()
#define rall(x)  x.rbegin(), x.rend()
#define FOR(i, b)  for(int i = 0; i < (int)b; ++i)
#define pb  push_back
#define len(x) (int)x.size()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
const int mod = 1e9 + 7;
const int N = 1e5 + 10;
//=======================================================================

void solve(){
   int n, target;
   cin >> n >> target;
   vector<int> v(n);
   for(int i = 0; i < n; ++i){
    cin >> v[i];
   }
   sort(all(v));
   int ans  = 0;
   for(int i = 0; i < n; ++i){
    int it = upper_bound(all(v), target - (v[i] + 1)) - v.begin();
    if(it > i){
        ans += ((it - i) - 1);
    }
   }
    cout << ans << endl;


}
int32_t main()
{
   //rifat_islam
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    int cs = 1;
    cin >> t;
    while(t)
    {
       // cout<<"Case "<<cs<<": ";
       solve();
       t--;
       cs++;
          }
    return 0;
}