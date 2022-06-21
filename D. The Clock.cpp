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
    int hour[16] = {0,1,2,3,4,5,10,11,12,13,14,15,20,21,22,23};
    int mintue[16] = {0,10,20,30,40,50,1,11,21,31,41,51,2,12,22,32};

    int x;
    int cnt = 0;
    string s;
    cin >> s >> x;
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[3] - '0') * 10 + (s[4] - '0');

    int repeat = 1440;
    while(repeat--){
        m += x;
        if(m >= 60){
            h += (m/60);
            m %= 60;
        }
        if(h>=24){
            h %= 24;
        }
        for(int i=0;i<16;i++){
            if(h == hour[i] && m == mintue[i]){
                cnt++;
                hour[i] = -1;
                mintue[i] = -1;
                break;
            }
        }

    }
    cout << cnt << endl;
    //cout << endl << endl << endl;
}

///Must see the constraints range
///Calculate the Time
