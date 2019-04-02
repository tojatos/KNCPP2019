#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

int ans[21] = {0};
void start() {
  int n, k; cin >> n >> k;
  for(int i = 1; i<21; i++) {
	ans[i] = k*i + ans[i-1];
  }
  cout << ans[k];
}
