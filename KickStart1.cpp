#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  int t; cin >> t;
  int n, q, answer;
  for(int c = 1; c <= t; ++c) {
	cin >> n >> q;
	int left[q], right[q];
	for(int i = 0; i < q; ++i) {
	  cin >> left[i] >> right[i];
	}

	int cnt[n] = {0};
	for(int i = 0; i < q; ++i) {
	  for(int j = left[i]; j <= right[i]; ++j) {
		++cnt[j];
	  }
	}

	answer = n;


	cout << "Case #" << c << ": " << answer << endl;
  }


}
