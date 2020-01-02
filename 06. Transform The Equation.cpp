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

int main(){
	flash;
	TC{

	string s;
	vector<char> v;
	cin>>s;
	stack<char> st;
	int i=1;
	for(auto x : s){
		//cout<<i<<" "<<x<<endl;
		if(x == ')'){
			//cout<<"pushed in vector and popped twice\n";
			v.push_back(st.top());
			st.pop();st.pop();
		}
		else if(x>='a' and x<='z'){
			//cout<<"got an alphabet\n";
			v.push_back(x);
		}
		else{
			//cout<<"got either a ( or some operators\n";
			st.push(x);
		}
		//i++;
	}
	for(auto x : v)
		cout<<x;
	cout<<endl;
}
	
	}
	
