#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  int n; cin >> n;
  int f = n;
  int last = 0;
  int tmp;
  stack<int> st;
  while(n--) {
	cin >> tmp;
	while(!st.empty() && last+1==st.top()) {
	  st.pop();
	  ++last;
	  continue;
	}
	if(last+1==tmp) {
	  ++last;
	  continue;
	}
	st.push(tmp);
  }
  while(!st.empty() && last+1==st.top()) {
	st.pop();
	++last;
  }
  cout << (last == f ? "yes" : "no");
}
