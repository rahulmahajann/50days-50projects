#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define pii pair<int,int>
#define pll pair<long long,long long>
#define usi unordered_set<int>
#define usl unordered_set<long long>
#define umii unordered_map<int,int>
#define umsi unordered_map<string,int>
#define umll unordered_map<long long,long long>
#define fi first
#define sec second
#define pub push_back
#define pob pop_back
#define B begin
#define E end
#define mp make_pair
#define vi vector<int>
#define vl vector<long long>
#define vii vector<pii>
#define vll vector<pll>
#define endl '\n'
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
const long long SZ = 5e5 + 5;
#define MOD 1000000007
#define f(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define frev(i,n,b,c)  for(ll i=n;i>=b;i-=c)
const ll inf = 1000000000000000000;
#define isBitSet(S, i) ((S >> i) & 1)

#define sz(x)               (ll)x.size()

#define all(c)              (c).begin(), (c).end()
#define allr(c)             (c).rbegin(), (c).rend()

#define max(a,b)            ((a > b) ? a : b)
#define min(a,b)            ((a < b) ? a : b)

#define ci(X)               ll X; cin>>X
#define cii(X, Y)            ll X, Y; cin>>X>>Y
#define ciii(X, Y, Z)         ll X, Y, Z; cin>>X>>Y>>Z
#define ciiii(W, X, Y, Z)      ll W, X, Y, Z; cin>>W>>X>>Y>>Z

#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), -1, sizeof((X)))
#define flv(X, V)           fill(all((X)), V)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#ifndef ONLINE_JUDGE
#define deb(x) cerr << #x <<" : "; _print(x); cerr << endl;
#else
#define deb(x)
#endif

#define deb1(x)             cerr<<#x<<"="<<(x)<<endl;
#define deb2(x,y)           cerr<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
#define deb3(x,y,z)         cerr<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
#define deb4(x,y,z,w)       cerr<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.sec); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



void setIO(string name = "") {
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}
//            < = = = = =    GCD     = = = = = >

ll gcd(ll a, ll b)
{
    if (a < b) gcd(b, a);
    if (b == 0)    return a;
    return gcd(b, a % b);
}

//            < = = = = =    LCM     = = = = = >

ll lcm(ll a, ll b)
{
    ll x = (a / gcd(a, b)) * b;
    return x;
}

//            < = = = = =    power  x^n     = = = = = >

ll power(ll x , ll n , ll m = inf) {
    if (x == 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    ll ans;
    if (n % 2 == 0) {
        ll smallAns = power(x, n / 2, m);
        ans = (smallAns * smallAns) % m;
    } else {
        ll smallAns = power(x, n - 1, m);
        ans = x;
        ans = (ans * smallAns) % m;
    }
    // for negative values also
    return (ans + m) % m;

}
ll divSum(ll a) {
    ll ans = 1;
    ll sa  = sqrt(a);
    f(i, 2, sa, 1) {
        if (a % i == 0) {
            // cout << i << " " << a / i << endl;
            ans = ans + i + (a / i);
        }
    }
    if (sa * sa == a)ans -= sa;
    return ans;
}
string multStr(ll a, string s) {
    ll n = s.length();
    ll carry = 0;
    frev(i, n - 1, 0, 1) {
        ll val = (s[i] - '0') * a;
        val += carry;
        s[i] = '0' + (val % 10);
        carry = val / 10;
    }
    if (carry)s = to_string(carry) + s;
    return s;
}
string addStr(string a, string b) {
    ll na = a.length();
    ll nb = b.length();
    reverse(all(a)); reverse(all(b));
    ll carry = 0;
    ll mn = min(na, nb);
    string s;
    f(i, 0, mn - 1, 1) {
        ll val = (a[i] - '0') + (b[i] - '0');
        val += carry;
        char ch = '0' + (val % 10);
        s += ch;
        carry = val / 10;
    }
    f(i, mn, na - 1, 1) {
        ll val = (a[i] - '0');
        val += carry;
        char ch = '0' + (val % 10);
        s += ch;
        carry = val / 10;
    }
    f(i, mn, nb - 1, 1) {
        ll val = (b[i] - '0');
        val += carry;
        char ch = '0' + (val % 10);
        s += ch;
        carry = val / 10;
    }
    reverse(all(s));
    if (carry)s = to_string(carry) + s;
    return s;
}

//            < = = = = =    Factorial nCr nPr     = = = = = >

inline ll mod_in(ll n) {
    return power(n, MOD - 2, MOD);
}

const ll N = 1e5 + 5;
ll fct[N];

ll factorial() {
    fct[0] = 1;
    for (ll i = 1 ; i < N ; i++) {
        fct[i] = fct[i - 1] * i;
        fct[i] %= MOD;
    }
    return 0;
}

ll nPr(ll n, ll r) {
    ll v = fct[n];
    v *= mod_in(fct[n - r]);
    v %= MOD;
    return v;
}

ll nCr(ll n, ll r) {
    ll v = fct[n];
    v *= mod_in(fct[r]);
    v %= MOD;
    v *= mod_in(fct[n - r]);
    v %= MOD;
    return v;
}

//            < = = = = =    CHECK FOR PRIME     = = = = = >

bool isprime(int n) {
    if (n == 2) {
        return true;
    }
    else if (n % 2 == 0) {
        return false;
    }
    else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}


//            < = = = = =    SieveOfEratosthenes    = = = = = >

vl primes;

void SieveOfEratosthenes()
{
    ll n = 1000005;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (ll p = 2; p <= n; p++)
        if (prime[p])
            primes.pub(p);
}
vl calculateLPS(string s) {
    // s = pat # text
    // for starting pos of pattern => lps[i-2*(patern length)+1]
    ll n = s.length();
    vl lps(n);
    f(i, 1, n - 1, 1) {
        ll j = lps[i - 1];
        while (j > 0 && s[j] != s[i])j = lps[j - 1];
        if (s[i] == s[j])j++;
        lps[i] = j;
    }
    return lps;
}
//            < = = = = =    SOLVE    = = = = = >

// // Using shift operator
// int t= num & (1<<i); // t is non zero (2^(i)) to be exact if ith bit is set else 0
// // Setting ith bit
// num|=(1<<i);
// // flipping ith bit
// num ^ = (1<<i); // ^ is the xor operator
// // clearing the ith bit
// num=num & ~(1<<i);

// bool cmp(pll x, pll y){
//     ll dx = min(2*(x.first),x.second)-min(x.first,x.second);
//     ll dy = min(2*(y.first),y.second)-min(y.first,y.second);
//     return dx>dy;
// }

// void rec(ll ){
//     if(){

//         return 0;
//     }

//     return ;
// }
void init() {
    fastio;
    // setIO("");
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    // factorial();
    // SieveOfEratosthenes();
}

//            < = = = = =    Solve     = = = = = >

const ll xd[4] = {0, 1, 0, -1}, yd[4] = {1, 0, -1, 0};
int solve() {
    ll n, md;
    cin >> n >> md;
    vl dp(n + 1, 0);
    // auto change = [&](ll l, ll r, ll val) {
    //     if (l <= n)dp[l] += val;
    //     if (r <= n)dp[r] -= val;
    //     return;
    // };
    // change(1, 2, 1);
    dp[1] = 1;
    ll hap = 0;
    ll pref = 1;
    f(i, 2, n, 1) {
        hap += dp[i];
        dp[i] = pref;
        dp[i] %= md;
        dp[i] += hap;
        dp[i] %= md;
        dp[i] +=  (i / 2);
        if (i & 1)dp[i]++;
        dp[i] %= md;
        for (ll j = 2; i * j <= n; j++) {
            dp[i * j] += dp[i];
            dp[i * j] %= md;
            ll ind = i * (j) + j;
            if (ind  <= n) {
                dp[ind] -= dp[i];
                dp[ind] += md;
                dp[ind] %= md;
            }
        }
        pref += dp[i];
        pref %= md;
        // cout << i << " : " << dp[i] << " : " << pref << endl;
    }
    cout << dp[n] << endl;
    return 0;
}

//            < = = = = =    MAIN     = = = = = >
int main() {

    init();

    int t = 1;
    //  cin>>t;
    f(i, 1, t, 1) {
        solve();
    }
    cerr << "\n\n" << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
    return 0;
}
