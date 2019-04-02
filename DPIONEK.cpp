#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

int getMax(int *res, int i) {
  int max = INT_MIN;
  for(int j = i - 1; j >= i-6; --j) {
	if(j<0) return max;
	if(res[j] > max) max = res[j];
  }
  return max;
}
void start() {
  int n; cin >> n;
  int arr[n]; for(int i = 0; i < n; ++i) cin >> arr[i];
  int res[n] = {0};
  res[0] = arr[0];
  for(int i = 1; i < n; ++i) {
	res[i] = getMax(res, i) + arr[i];
  }
  cout << res[n-1];
}
