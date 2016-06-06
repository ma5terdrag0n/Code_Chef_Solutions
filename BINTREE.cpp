/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com
*
*/
#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<iomanip>
#include<cstdlib>
#include<utility>
#include<math.h>
#include<cstring>
#include<ctime>
#include<string>
#include<stack>
#include<deque>
#include<bitset>
#include<list>
#include<queue>
#include<algorithm>
#include<iterator>
#define min_3(a,b,c) (min((a),min((b),(c))))
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define PI acos(-1.0)
#define INF 1000000007
#define NINF -1000000007
#define FOR(i,a,n) for(long long i=a;i<=n;i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n-1)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> vi;
typedef vector<vi> vii;
int main() {
	ll t;
	cin>>t;

	while(t--){
		ll path=0;
		ll a,b;
		cin>>a>>b;
		ll temp_a=a,temp_b=b;
		if(b==1){
			swap(a,b);
		}
		if(a==1){
			ll temp_path=0;
			while(b!=1){
				if(b%2!=0) b--;
				b/=2;temp_path++;
			}
			cout<<temp_path<<endl;
			continue;
		}
		while(a!=b){
		if(a<b){
			b/=2;
			path++;
			continue;
		}
		if(a>b){
			a/=2;
			path++;
			continue;
		}
		}
		cout<<path<<endl;
	}
	return 0;
}
