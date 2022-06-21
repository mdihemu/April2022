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
    int n, m;
    cin >> n >> m;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    vector<int>v;
    for(int i=0;i<n-1;i++){
        for(int ii=i+1;ii<n;ii++){
            int cnt = 0;
            for(int j=0;j<m;j++){
                int temp = s[i][j] - 'a';
                int temp2 = s[ii][j] - 'a';
                if(temp > temp2){
                    cnt += temp - temp2;
                }
                else{
                    cnt += temp2 - temp;
                }
            }
            v.push_back(cnt);
        }
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
}

///Must see the constraints range
///Calculate the Time
