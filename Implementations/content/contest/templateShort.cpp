#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
#define mp make_pair
#define f first
#define s second

typedef vector<int> vi;
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rsz resize
#define pb push_back

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

const int MOD = 1e9+7; // 998244353; // = (119<<23)+1
const ld PI = 4*atan((ld)1);

template<class T> bool ckmin(T& a, const T& b) {
	return a > b ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0; }
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
}