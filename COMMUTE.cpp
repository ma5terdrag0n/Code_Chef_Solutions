/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com/category/hackerrank-solutions/
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
		ll n;
		cin>>n;
		ll ti=0;
		ll flag=0;
		while(n--){
			ll a,b,c;
			cin>>a>>b>>c;
			//******LOGIC**********
			if(flag==0){
				ti+=a+b;
				flag=1;continue;
			}
			if(ti<=a){
				ti=a+b;
			}
			else {
				while(a<ti) a+=c;
				ti=b+a;
			}
			//*******END***********
		}
		cout<<ti<<endl;
	}
	return 0;
}
