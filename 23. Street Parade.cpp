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

int main(){
	flash;
	int n;
	cin>>n;
	while(n){
		bool flag = true;
		vector<int> v(n);

		for(int i=0;i<n;i++){
			cin>>v[i];
		}

		int requirement = 1;
		stack<int> s;

		for(int i=0;i<n; ){
			if(v[i] == requirement){
				//cout<<"v[i] is == requirement\n";
				requirement++;
				i++;
				continue;
			}
			else if(!s.empty() and s.top() == requirement){
				//cout<<"found "<<requirement<<" at top of stack\n";
				s.pop();
				requirement++;
			}
			else{
				//cout<<"we are just pushing "<<v[i]<<" into stack\n";
				s.push(v[i]);
				i++;
			}
		}
		//debug(requirement);
		while(!s.empty()){
			auto x = s.top();
			s.pop();
			if(x == requirement){
				requirement++;
				continue;
			}
		}
		requirement == n+1  ? cout<<"yes\n" : cout<<"no\n";
		cin>>n;


	}
}

/* Try these Test cases*/
/* 
5
4 1 5 3 2
5
3 1 2 5 4
5
5 3 2 1 4
10
1 2 10 5 4 3 7 6 8 9
10
1 2 10 5 4 3 9 8 7 6
5
3 5 2 4 1
5
1 2 4 3 5
4
4 2 3 1
0
*/

/*
Outputs : 
no
yes
yes
yes
yes
no
yes
no
*/
