#include <bits/stdc++.h>
using namespace std;

void test_cases() {
	int n;
	string s;
	cin >> n >> s;
	int x = 0;
	int y = 0;
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == s[i+1]) {
			x += (s[i] == '1');
			y += (s[i] == '0');
		}
	}
	cout << max(x, y) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_cases();
	}
}
