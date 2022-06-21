#include<bits/stdc++.h>
using namespace std;

#define     IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int              long long
#define     endl            "\n"
#define     PI               acos(-1.0)
#define     IN              freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

int BIGMOD(int b, int p)
{
    int ans = 1 % MOD, x = b % MOD;
    while(p){
        if(p&1)ans = (ans * x)%MOD;
        x = (x*x)%MOD;
        p >>= 1LL;
    }
    return ans;
}

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans = -1;
    int p = 0, t = 0;
    for(int i=0;i<n;i++){
        while(p<n && t + a[p] <= s){
            t += a[p];
            p++;
        }
        if(t == s){
            ans = max(ans, p-i);
        }
        t -= a[i];
    }
    if(ans != -1){
        ans = n - ans;
    }
    cout << ans << endl;
}

///Must see the constraints range
///Calculate the Time
