#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>

using namespace std;

#define F                    first
#define S                    second
#define int                  long long int
#define pb                   push_back
#define pii                  pair<int,int>
#define vi                   vector<int>
#define vii                  vector <pair <int,int> >
#define umpii                unordered_map<int,int>
#define mem(a,b)             memset(a, b, sizeof a)
#define mii                  map<int,int>
#define m_p                  make_pair
#define pqh                  priority_queue<int>
#define pql                  priority_queue<int,vi,greater <int> >
#define setbits(x)           __builtin_popcountll(x);
#define zerobits(x)          __builtin_ctzll(x);
#define fo(i, k, n)          for (int i = k; k < n ? i < n : i > n; k < n ? i++ : i--)
#define fa(i, N)             for (auto i : N)
#define all(X)               X.begin(), X.end()
#define ceill(a,b)           ((a)/(b) + (((a)%(b))!=0))
#define bin(n)               bitset<32>(n).to_string()
#define yes                  cout<<"YES\n"
#define no                   cout<<"NO\n"
#define vin(name,N)          vi name(N);fo(i,0,N){cin>>name[i];}
#define dbg(x)               cerr<<#x<<" :: "<<x<<endl;
#define dbg2(x,y)            cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<endl;

const int INF = 1e9;
int M=1e9+7;

int mod(int x){
    return ((x%M+M)%M);
}

int add(int a,int b){
    return mod(mod(a)+mod(b));
}

int mul(int a,int b){
    return mod(mod(a)*mod(b));
}
int modPow(int a, int b){
    if(b==0)
        return 1LL;
    if(b==1)
        return a%M;
    int res=1;
    while(b){
        if(b%2==1)
            res=mul(res,a);
        a=mul(a,a);
        b=b/2;
    }
    return res;
}


void solve() {
    char a='1';
    cout<<a;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
        