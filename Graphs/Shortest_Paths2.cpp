
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
const long long mod = 1e9+7;
//const long long mod =1000000007;
 //const long long mod = 998244353;
const long long int special_prime = 982451653;
using namespace std;
 
// DEBUGGER
// *
vector<string> vec_splitter(string s) {
	s += ',';
	vector<string> res;
	while(!s.empty()) {
		res.push_back(s.substr(0, s.find(',')));
		s = s.substr(s.find(',') + 1);
	}
	return res;
}
void debug_out(
vector<string> __attribute__ ((unused)) args,
__attribute__ ((unused)) int idx, 
__attribute__ ((unused)) int LINE_NUM) { cerr << endl; } 
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
	if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
	stringstream ss; ss << H;
	cerr << args[idx] << " = " << ss.str();
	debug_out(args, idx + 1, LINE_NUM, T...);
}
#ifdef LOCAL
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define debug(...) 42
#endif
// *
// DEBUGGER
 
#define test int t; cin>>t; while(t--)
 
#define init(arr,val) memset(arr,val,sizeof(arr))
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
#define lb lower_bound
#define ub upper_bound
#define REV reverse
#define mset(a) memset(a,0,sizeof(a))
const long long N = 1e5 + 100;
 int pr[N]; void preSieve(){for(int i = 2; i < N; ++i){if(!pr[i])for(int j = i; j < N; j+=i)pr[j]=i;}}
 ll inv[N]; void preModInv(){inv[0]=0;inv[1]=1;for(int i = 2; i < N; ++i)inv[i] = mod-mod/i*inv[mod%i]%mod;}
 
#define inFact(N) ll ifact[N]; void preiFact(){ifact[1] = 1; for(int i = 2; i < N; ++i)ifact[i]=ifact[i-1]*inv[i]%mod;}
 
 int fact[N];
void preFact(){fact[0] = 1,fact[1] = 1; for(int i = 2; i < N; ++i)fact[i]=fact[i-1]*i%mod;}
// Randomization
 
 
 
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
 
template <typename T>
using ord_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
 
const long long inf = 1e9;
const long double pi = acos(-1);
 
string tostring(int number){stringstream ss; ss<<number; return ss.str();}
#define Min(a, b) ((a < b) ? a : b)
#define Max(a, b) ((a < b) ? b : a)
ll dx[] = {1,0,-1,0};
ll dy[] = {0,1,0,-1};
int pos[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
const int INF = (int) 1e9;
const int INF2 = 0x3f3f3f3f;
#define INF3 (ll)1e18
const int maxm=1e5+5;
 
#define inf 1000000000000000	
const int XN = 1e5 + 3;
ll binpower(ll base, ll e, ll mod) 
{
    int result = 1;
    base %= mod;
    while (e) 
    {
        if (e & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        e >>= 1;
    }
    return result;
}
 
bool check_composite(int n, int a, int d, int s)
 {
    int x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (int)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};
 
bool MillerRabin(int n) 
{ 
	// returns true if n is prime, else returns false.
    if (n < 2)
        return false;
// fltuu
    int r = 0;
    int d = n - 1;
    while ((d & 1) == 0) 
    {
        d >>= 1;
        r++;
    }
 
    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}
 
vector<int> trial_division2(int n) 
{
    vector<int> factorization;
    while (n % 2 == 0) {
        factorization.push_back(2);
        n /= 2;
    }
    for (int d = 3; d * d <= n; d += 2)
     {
        while (n % d == 0)
         {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}
 
ll gcd(ll a, ll b){
	return (b == 0) ? a : gcd(b, a % b);}	
 
int lcs (string a,string b)
{
	int l1 =a.length();
	int l2 = b.length();
	int dp[l1+1][l2+1];
 
	for(int i=0;i<=l1;i++)
	{
		for(int j=0;j<=l2;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;
				}
			else if(a[i-1]==b[j-1])	
			   {
				   dp[i][j]= dp[i-1][j-1]  +1;
				   
				   }else
				   {
					   
					   dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
					   }
				
				
			
			}
		}
	return dp[l1][l2];
	
	}
	
	
bool checkDivisibility(ll n, ll digit) 
{ 
    // If the digit divides the number 
    // then return true else return false. 
    return (digit != 0 && n % digit == 0); 
} 
  
// Function to check if all digits 
// of n divide it or not 
bool is_go(ll x)
{
    ll temp=x;
    while(temp){
        ll dig=temp%10;
        if(dig!=0){
            if(x%dig!=0) return false;
        }
        temp/=10;
    }
    return true;
}
 
 
 
int kthRoot(int n, int k) 
{ 
    return pow(k, 
               (1.0 / k) 
                   * (log(n) 
                      / log(k))); 
} 
 
 
 
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) 
    {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
 
 
// A function to print all prime  
// factors of a given number n  
set<ll>facs (ll n)  
{  
	set<ll>val;
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        val.insert(2);
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            val.insert(i);
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        val.insert(n);
        
  return val;
}  
 
 
ll getExponent(int n, int p) {
    if (p <= 1) {
        return -1;
    }
    int x = 0;
    for (; n % p == 0; n /= p) {
        x++;
    }
    return x;
}
ll largestPower(ll n, ll p)  
{  
    // Initialize result  
    ll x = 0;  
  
    // Calculate x = n/p + n/(p^2) + n/(p^3) + ....  
    while (n)  
    {  
        n /= p;  
        x += n;  
    }  
    return x;  
} 
 
 
 
 
	bool allDigitsDivide(ll n) 
{ 
    int temp = n; 
    while (temp > 0) { 
  
        // Taking the digit of the 
        // number into digit var. 
        ll digit = temp % 10; 
        if (!(checkDivisibility(n, digit))) 
            return false; 
  
        temp /= 10; 
    } 
    return true; 
} 	
 
 
struct pt 
{
   ll x, y;
   pt(ll a,ll b){
      x=a;
      y=b;
   }
};
int parity(string &a)
{
	
	ord_set<P<char,int>>val;
  int ans=0;
	for(int i= a.size()-1;i>=0;i--)
	{
		 ans+= val.order_of_key(mp(a[i],-inf));
        val.insert(mp(a[i],i));
		
		}
		return ans;
	
	}
 
// main code here
const int MX = 200001; //check the limits, dummy
const int NX = 500001;
const int mxX=2e5;
int n,m;
ll dp[502][502];
int main()
{
	FAST; 
	int q;
	cin>>n>>m>>q;
	
   memset(dp,0x3f,sizeof(dp));
   for(int i=0;i<m;i++){
	  ll a,b,c; cin>>a>>b>>c;
	   --a; --b;
	   dp[a][b]=Min(dp[a][b],c);
	   dp[b][a]=Min(dp[b][a],c);
   }
   loop(i,0,n){dp[i][i]=0;}
  for(int k=0;k<n;k++)
  {
	  
	  loop(i,0,n)
	  { 
		  loop(j,0,n)
		  { 
			  dp[i][j]=Min(dp[i][j],dp[i][k]+dp[k][j]);
			  
			  }
		  }
	  
  } 
   
 
 
while(q--)
{
	
	int a,b;
	cin>>a>>b;
	--a; --b;
	cout<<(dp[a][b]>=1e18?-1:dp[a][b])<<endl;
}
 
 
 
return 0;
}
 