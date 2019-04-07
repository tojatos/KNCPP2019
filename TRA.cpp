#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 
class UndirectedGraph {
  public:
	UndirectedGraph(int s);
	void addEdge(int i, int j);
  private:
	int size;
	vector<set<int>> adjList;
	friend ostream& operator<<(ostream& os, const UndirectedGraph& u);
};
UndirectedGraph::UndirectedGraph(int s) : size(s), adjList(s) { }
void UndirectedGraph::addEdge(int i, int j) {
  adjList[i].insert(j);
  adjList[j].insert(i);
}
ostream& operator<<(ostream& os, const UndirectedGraph& u) {
  int cnt = 0;
  for(auto i : u.adjList) {
	os << cnt << ": ";
	for(auto a : i) os << a << ' ';
	os << endl;
	++cnt;
  }
  return os;
}
struct group {
  int a;
  int b;
};
void start() {
  int t; cin >> t;
  while(t--) {
	int n, m; cin >> n >> m;
	UndirectedGraph u(n*2);
	int tmp1, tmp2;
	for(int i = 0; i < m; ++i) {
	  cin >> tmp1 >> tmp2;
	  u.addEdge(tmp1-1, n+tmp2-1);
	}
	cout << u;
//	for(int i = 0; i < m*2; ++i) {
//	  for(int j = 0; j < m*2; ++j) {
//		cout << matrix[i][j] << ' ';
//	  }
//	  cout << endl;
//	}

//	vector<group> groups;
//	bool visited[m*2][m*2];
//	memset(visited, 0, sizeof(visited));
//	group g {0, 0};
//	for(int i = 0; i < m*2; ++i) {
//	  for(int j = 0; j < m*2; ++j) {
//		if(visited[i][j]) continue;
//		visited[i][j] = true;
//		visited[j][i] = true;
//		BFS<m>(matrix, visited i, j);
//		for(int k = 0; k < m*2; ++k) {
//
//
//		}
//	  }
//	}
  }
}
//group BFS(bool** matrix, bool** visited, int m, int i, int j){
//  for(int i = 0; i < m*2; ++i) {
//	for(int j = 0; j < m*2; ++j) {
//	  cout << matrix[i][j] << ' ';
//	}
//	cout << endl;
//  }
//}
