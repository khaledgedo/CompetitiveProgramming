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
	ll n; cin >> n;
	int di = n - (n % 10), lg = log10(n);
	vector<int>pu; ll sum = 0;
	for (int i = lg; i >=0; i--) {
		int nm = pow(10, i);
		while ((sum + nm <= n)) {
			bool ok = 0;
			for (int j = 0; j < pu.size(); j++) {
				ll ch = pu[j] + nm; bool df = 0;
				while (ch) {
					if (ch % 10 != 0 && ch % 10 != 1) {
						df = 1;
					}
					ch /= 10;
				}
				if (!df) {
					ok = 1; pu[j] += nm; break;
				}
			}
			if (!ok)pu.push_back(nm);
			sum += nm;
		}
	}
	cout << pu.size() << endl;
	for (int i = 0; i < pu.size(); i++)cout << pu[i] << ' '; cout << endl;
	m3lsh;
}
