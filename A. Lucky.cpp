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
    string t;
    cin >> t;
    int cnt = 0, cntt = 0;
    for(int i=0;i<3;i++){
        cnt += (t[i] - '0');
    }
    for(int i=3;i<6;i++){
        cntt += (t[i] - '0');
    }

    if(cnt == cntt){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

///Must see the constraints range
///Calculate the Time
