/* Author : [****    Dark    ****] */
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
const ull MOD=1e9+7;
const int INF = 0x3f3f3f3f;// for integer only
#define PI 3.1415926535897932384626
#define flash ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define debug(x) cout << (#x) << " is " << (x) << endl
#define rep(i,j,k) for(int i=j;i<k;i++)
#define TC int tc;cin>>tc;while(tc--)
#define umap unordered_map
#define uset unordered_set
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define vsort(x) sort(x.begin(),x.end())
#define vrsort(x) sort(x.begin(),x.end(),greater<int>())
#define pii pair<int,int>
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define odd(x) (x & 1)
#define even(x) (!odd(x))

#define  timer clock_t start, end;
#define time double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 


bool cycles = false;
bool vis [1000005] = {false};
vector<vector<int>> graph;

void printGraph(int numberOfNodes){
	for(int i=1;i<=numberOfNodes;i++){
		cout<<i<<" --> ";
		for(auto x : graph[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

void dfs(int node){
	vis[node] = true;
	if(graph[node].size()){
	for(auto x : graph[node]){
		
		if(!vis[x]){
			dfs(x);
		}
		else{
			cycles = true;
		}
	}
}
	return;
}
int main(){
	//flash;
	int numberOfNodes,numberOfEdges;
	cin>>numberOfNodes>>numberOfEdges;

	 graph.resize(numberOfNodes+1);
	
	for(int i=0;i<numberOfEdges;i++){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		
	}

	//printGraph(numberOfNodes);
	
	int count = 0;
	for(int i=1 ; i<=numberOfNodes;i++){
		if(!vis[i]){
			dfs(i);
			count++;
		}
	}
	
	if(count > 1 or cycles){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
}

