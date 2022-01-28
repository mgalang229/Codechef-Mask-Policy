#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a;
		cin >> n >> a;
		// choose the smaller value between the infected and uninfected persons
		cout << min(n - a, a) << '\n';
	}
	return 0;
}
