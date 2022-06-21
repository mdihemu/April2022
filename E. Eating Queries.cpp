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
    int n, q;
    cin >> n >> q;
    int a[n];
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        cnt += a[i];
    }

    sort(a, a+n, greater<>());
    for(int i=1;i<n;i++){
        a[i] += a[i-1];
    }
    map<int, int>mp;
    while(q--){
        int t;
        cin >> t;
        bool ok = false;
        if(t > cnt){
            cout << -1 << endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(a[i]>=t){
                cout << i+1 << endl;
                ok = true;
                break;
            }
        }
        if(!ok){
            cout << -1 << endl;
        }
    }
}

///Must see the constraints range
///Calculate the Time
