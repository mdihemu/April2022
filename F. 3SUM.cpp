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
    int n;
    cin >> n;
    int aa[n];
    int a[10] = {0};
    for(int i=0;i<n;i++){
        cin >> aa[i];
        int x = aa[i] % 10;
        a[x]++;
    }
    vector<int>v;
    for(int i=0;i<10;i++){
        int x = a[i];
        if(x>3){
            x = 3;
        }
        while(x--){
            v.push_back(i);
        }
    }
    int m = v.size();
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
                int sum = v[i] + v[j] + v[k];
                if(sum%10 == 3){
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
