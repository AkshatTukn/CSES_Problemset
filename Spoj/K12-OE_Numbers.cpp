#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
const long long mod = 1e9+7;
//const long long mod =1000000007;
//const long long mod = 998244353;
const long long int special_prime = 982451653;
using namespace std;

#define test int t; cin>>t; while(t--)

#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)

#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define Q queue
#define D deque
#define ST set
#define MS multiset
#define mp make_pair
#define pb emplace_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define TH third
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define ld long double
#define sz(x) (int)((x).size())
#define square(x) ((x)*(x))
#define cube(x) ((x)*(x)*(x))
#define distance(a,b,c,d) ((a-c)*1LL*(a-c)+(b-d)*1LL*(b-d))
#define range(i,x,y) ((x <= i) && (i <= y))
#define SUM(a) accumulate(a.begin(),a.end(),0LL)
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define lb lower_bound
#define ub upper_bound
#define REV reverse
#define mset(a,b) memset(a,b,sizeof(a))
const long long N = 1e6 + 100;
 int pr[N]; void preSieve(){for(int i = 2; i < N; ++i){if(!pr[i])for(int j = i; j < N; j+=i)pr[j]=i;}}
 ll inv[N]; void preModInv(){inv[0]=0;inv[1]=1;for(int i = 2; i < N; ++i)inv[i] = mod-mod/i*inv[mod%i]%mod;}

 ll ifact[N]; void preiFact(){ifact[0]=1; ifact[1] = 1; for(int i = 2; i < N; ++i)ifact[i]=ifact[i-1]*inv[i]%mod;}

 ll fact[N];
void preFact(){fact[0] = 1,fact[1] = 1; for(int i = 2; i < N; ++i)fact[i]=fact[i-1]*i%mod;}
// Randomization
 
 
 
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
// pair operation
template<class T, class U>istream& operator>>(istream& in, pair<T,U> &rhs){in >> rhs.first;in >> rhs.second;return in;}
template<class T, class U>ostream& operator<<(ostream& out,const pair<T,U> &rhs){out << rhs.first;out << " ";out << rhs.second;return out;}
template<class T, class U>pair<T,U> operator+(pair<T,U> &a, pair<T,U> &b){return pair<T,U>(a.first+b.first,a.second+b.second);}
template<class T, class U>pair<T,U> operator-(pair<T,U> &a, pair<T,U> &b){return pair<T,U>(a.first-b.first,a.second-b.second);}
// Linear STL
// VECTOR
template<class T>istream& operator>>(istream& in, vector<T> &a){for(auto &i: a)cin >> i;return in;}
template<class T>ostream& operator<<(ostream& out, const vector<T> &a){for(auto &i: a)cout << i << " ";return out;}
// SET
template<class T>ostream& operator<<(ostream& out, const set<T> &a){for(auto &i: a)cout << i << " ";return out;}
template<class T>ostream& operator<<(ostream& out, const unordered_set<T> &a){for(auto &i: a)cout << i << " ";return out;}
template<class T>ostream& operator<<(ostream& out, const multiset<T> &a){for(auto &i: a)cout << i << " ";return out;}
// MAP
template<class T,class U>ostream& operator<<(ostream& out, const map<T,U> &a){for(auto &i: a)cout << "(" << i.first << ", " << i.second << ")\n";return out;}
template<class T,class U>ostream& operator<<(ostream& out, const unordered_map<T,U> &a){for(auto &i: a)cout << "(" << i.first << ", " << i.second << ")\n";return out;}
 
using namespace __gnu_pbds;

#define Min(a, b) ((a < b) ? a : b)
#define Max(a, b) ((a < b) ? b : a)
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

#define inf 1000000000000000 
#define INF3 1e18      
const int XN = 1e5 + 3;
// main code here
const int MX = 200001; //check the limits, dummy
const int NX = 2750132;
const int mxX=1e5+7;
const int nx = 18;
const int M1 = 1e9+9;
const int INF = 1e9+7;
void init_code()
{
FAST;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
#endif

}
const int rn= 3e5+5;
ll n,m,k;
V<ll>adj[MX],adj2[MX];
ll a[MX],b[MX],dp1[MX],child[MX];
ll X,Y;
int dp[91][91][10][2];
V<int>store;
int check=0;
int solve(int even,int odd,int ind,int can)
{
  if(ind==10)
  {
    return (even>odd);
  }
if(~dp[even][odd][ind][can])
{
    return dp[even][odd][ind][can];
}
int ans=0;
if(can)
{
   for(int i=0;i<=9;i++)
   {
      if(i&1)
      {
        ans+= solve(even,odd+i,ind+1,can);
      }else
      {
        ans+= solve(even+i,odd,ind+1,can);
      }
   }
}else
{

 for(int i=0;i<=store[ind];i++)
 {
       int ok = (i!=store[ind]);
        ok |= can;
         if(i&1)
      {
        ans+= solve(even,odd+i,ind+1,ok);
      }else
      {
        ans+= solve(even+i,odd,ind+1,ok);
      }

 }


}
return dp[even][odd][ind][can]=ans;

}
int main()
{
init_code();
cout<<setprecision(12)<<fixed;
int tes=1;
//compPrimes(rn);
cin>>tes;
while(tes--)
{  
    cin>>n>>m;
    store.clear();
    int cur_n=n;
    n--;
    for(int i=0;i<=9;i++)
    {
        store.push_back(n%10);
        n/=10;
    }
  reverse(all(store));
  mset(dp,-1);
int ans= solve(0,0,0,0);
store.clear();
 for(int i=0;i<=9;i++)
    {
        store.push_back(m%10);
        m/=10;
    }
  reverse(all(store));

mset(dp,-1);
int ans1=solve(0,0,0,0);
cout<<ans1-ans<<endl;

}
return 0;
}