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
vector<int> answer(200,0);
inline int helper(int x, vector<int> &answer , int answerSize){
			int carry=0;
			for(int i=0;i<answerSize;i++){
				int product = x*answer[i]+carry;
				answer[i] = product%10;
				carry=product/10;
			}
			while(carry){
				answer[answerSize]=carry%10;
				carry/=10;
				answerSize++;
			}
			return answerSize;
		}
int main(){
	TC{
		
		int n,currentIndex=0;
		cin>>n;
		answer.resize(200,0);
		answer[0]=1;
		int answerSize=1;
		
		for(int i=2;i<=n;i++){
			answerSize=helper(i,answer,answerSize);
		}

		for(int i=answerSize-1;i>=0;i--){
			cout<<answer[i];
		}
		cout<<endl;
		
		
	}
}
