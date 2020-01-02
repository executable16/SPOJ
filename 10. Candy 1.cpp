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
	int sizeOfInput;
	cin>>sizeOfInput;

	while(sizeOfInput!=-1){
		std::vector<int> v(sizeOfInput);
		ll sum=0;
		for(int i=0;i<sizeOfInput;i++){
			cin>>v[i];
			sum+=v[i];
		}
		if(sum%v.size()){
			cout<<-1<<endl;
		}
		else{
			ll avg = sum/v.size();
			ll difference = 0;
			for(auto i : v){
				difference+= abs(i-avg);
			}
			cout<<difference/2<<endl;
		}
		cin>>sizeOfInput;
	}
}
