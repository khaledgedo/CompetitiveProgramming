#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define m3lsh return 0;
typedef long long ll;
typedef unsigned long long ull;

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int  dix[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  diy[] = { 0, 0, 1, -1, 1, -1, 1, -1 };

int main() {
	fast;
	int n, m;
	while (cin >> n >> m) {
		if (!n && !m)break;
		ll res = 1,nn=n,mm=m;
		m = min(m, n - m);
		for (int i = 1; i <= m; i++) {
			res *= n;
			res /= i;
			n--;
		}
		cout << nn<<" things taken "<<mm<<" at a time is "<<res<<" exactly." << endl;
	}
	m3lsh;
}
