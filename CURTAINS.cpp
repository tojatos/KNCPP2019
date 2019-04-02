#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

bool canHeDoIt(int n) {
  if (n%2==0) return false;
  if (n==1 || n==3) return true;
  return canHeDoIt((n-1)/2);
}

void start() {
  int t, n; cin >> t;
  while(t--) {
	cin >> n;
	if (n==2)
	  cout << "TAK" << endl;
	else if (n<2) 
	  cout << "NIE" << endl; 
	else
	  cout << (canHeDoIt(n-2) ? "TAK" : "NIE") << endl;
  }
}
