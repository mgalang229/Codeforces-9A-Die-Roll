#include <bits/stdc++.h>

using namespace std;

void decode() {
	int a, b;
	cin >> a >> b;
	int c = max(a, b);
	c = (6 - c) + 1;
	if(c % 2 == 1) {
		if(c == 3) cout << "1/2";
		else cout << c << "/6";
	}
	else {
		if(c == 4) cout << "2/3";
		else {
			c = 6 / c;
			cout << "1/" << c;
		}
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
