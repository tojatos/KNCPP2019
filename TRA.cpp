#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 
class UndirectedGraph {
  public:
	UndirectedGraph(int s);
	void addEdge(int i, int j);
	set<int> getEdges(int i);
	const int size;
  private:
	vector<set<int>> adjList;
	friend ostream& operator<<(ostream& os, const UndirectedGraph& u);
};
UndirectedGraph::UndirectedGraph(int s) : size(s), adjList(s) { }
void UndirectedGraph::addEdge(int i, int j) {
  adjList[i].insert(j);
  adjList[j].insert(i);
}
set<int> UndirectedGraph::getEdges(int i) { 
  return adjList[i];
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
int how_much(UndirectedGraph &u, int n, int m);
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
	cout << how_much(u, n, m) << endl;
  }
}
bool contains(unordered_set<int> v, int i) {
  return v.find(i) != v.end();
}
group BFS(group g, UndirectedGraph &u, unordered_set<int> &visited, int i, int m) {
  int s = u.size;
  if(i<s/2) ++g.a;
  else ++g.b;
  visited.insert(i);
  set<int> edges = u.getEdges(i);
  for(auto i : edges) {
	if(!contains(visited, i))
	  g = BFS(g, u, visited, i, m);
  }
  return g;
}
int how_much(UndirectedGraph &u, int n, int m) {
	if(m==0) return n / 2;
	vector<group> groups;
	unordered_set<int> visited;
	for(int i = 0; i < n*2; ++i) {
	  group g {0, 0};
	  if(!contains(visited, i)) groups.push_back(BFS(g, u, visited, i, m));
	}
	for(auto i : groups) {
	  cout << i.a << ' ' << i.b << endl;
	}
	return -1;
}
