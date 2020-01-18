/* Author : [****    Dark    ****] */
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
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
		int T;
		cin>>T;
		for(int i=1;i<=T;i++){
		ll goal,n;
		cin>>goal>>n;
		vector<ll> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end(),greater<ll>());

		ll sum=0,ans=0;
		for(int i=0;i<n;i++){
			sum+=v[i];
			if(sum>=goal){
				ans = (i + 1);
				break;
			}
		}
		cout<<"Scenario #"<<i<<":"<<endl;
		ans ? cout<<ans : cout<<"impossible";
		cout<<endl;
	}

}
