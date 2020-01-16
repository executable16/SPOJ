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

inline void add(vector<int> &v,int x){

	reverse(v.begin(),v.end());
	 int carry=x;
	for(int i=0;i<v.size();i++){
		int sum= v[i] + carry;
		v[i] = sum%10;
		carry = sum/10; 
	}

	while(carry){

		v.push_back(carry%10);
		carry = carry/10;
	}

}

void transform(vector<int> &v,int bound){
	int j=bound;
	for(int i=0;i<v.size();i++){

		if(i <= bound){
			cout<<v[i];
		}
		else{
			cout<<v[bound--];
		}
	}
	cout<<endl;
}
bool alreadypallindrome(vector<int> &v){
	for(int i=0;i<v.size()/2;i++){
		if(v[i]!=v[v.size()-1-i]){
			return false;
		}
	}
	return true;
}
inline void goforodd(vector<int> &v){
	vector<int> temp;
	if(v.size()==1){
		if(v[0] <= 8){
			cout<<v[0]+1<<endl;
			return;
		}
		else{
			cout<<11<<endl;
			return;
		}
	}
	else if(v.size()>=3){
		int mid = v.size()/2;
		int left = mid-1;
		int right = mid+1;
		if(alreadypallindrome(v)){
					//cout<<"error 3\n";
					//number is already a pallindrome
					//cout<<"already a pallindrome \n";
					
					
					//vector<int> pp;
					for(int i=0;i<=mid;i++){
						temp.push_back(v[i]);
					}
					
					add(temp,1);
					reverse(temp.begin(),temp.end());
					
					for(int i=0;i<=mid;i++){
						cout<<temp[i];
					}
					for(int i=mid-1;i>=0;i--){
						cout<<temp[i];
					}
					cout<<endl;
					return;
		}

		else if(v[left] > v[right]){ //28749
			
			for(int i=0;i<=mid;i++){
				cout<<v[i];
			}
			for(int i=mid-1;i>=0;i--){
				cout<<v[i];
			}
			cout<<endl;
			return;
		}

		else if(v[left] < v[right]){ 
			
			//
			for(int i=0;i<=mid;i++){
				temp.pb(v[i]);
			}
			add(temp,1);
			reverse(temp.begin(),temp.end());
			for(int i=0;i<=mid;i++){
				cout<<temp[i];
			}
			for(int i=mid-1;i>=0;i--){
				cout<<temp[i];
			}
			cout<<endl;
			return;
		}
			else if(v[left] == v[right]){
			
			int i=left,j=right;
			while(i >= 0 and j<v.size()){
				if(v[i] == v[j]){
					i--;
					j++;
					continue;
				}
				else if(v[i] < v[j]){ //236989642 (3,4)
				
				//	pallindrome = false;
					//
					for(int i=0;i<=mid;i++){
						temp.pb(v[i]);
					}
					add(temp,1);
					reverse(temp.begin(),temp.end());
					for(int i=0;i<=mid;i++){
						cout<<temp[i];
					}
					for(int i=mid-1;i>=0;i--){
						cout<<temp[i];
					}
					cout<<endl;
					return;
					break;
				} // end of part 1

				else if(v[i] > v[j]){ //246989632 i.e simply morror image
					
					//pallindrome = false;
					////
					for(int i=0;i<=mid;i++){
						cout<<v[i];
					}
					for(int i=mid-1;i>=0;i--){
						cout<<v[i];
					}
					cout<<endl;
					return;;
				} // end of part 2
		}
	
		

		}
		return;

	}
}
int main(){
	TC{
	
	string s;
	cin>>s;
	vector<int> v;
	//
	
	vector<int> temp;
	v.clear();
	temp.clear();
	bool vis = false;
	bool pallindrome = true;
	for(auto x : s){
		v.push_back(x - '0');
	}
	if(count(v.begin(),v.end(),9) == v.size()){
		add(v,2);
		for(auto x : v){
			cout<<x;
		}
		cout<<endl;
		vis = true;
	}
	else if(even(v.size()) and (not vis)){
		int left = v.size()/2 - 1;
		int right = left+1;

		if(v[left] < v[right] ){
			++v[left];
			transform(v,left);
		}
		else if(v[left] > v[right]){
			transform(v,left);
		}
		/*else if(v[left] == v[right] and v[left]!=9){
			++v[left];
			transform(v,left);
		}*/
		/*else if(v[left] == v[right] and v[left]==9){
			//
			for(int i=0;i<=left;i++){
				temp.push_back(v[i]);
			}
			add(temp,1);
			reverse(temp.begin(),temp.end());
			for(auto x : temp){
				cout<<x;
			}

			reverse(temp.begin(),temp.end());
			for(auto x : temp){
				cout<<x;
			}
			cout<<endl;
		}*/
		
					
					else if(alreadypallindrome(v)){
						//cout<<"already hai bhaiya!! \n";
						vector<int> temp;
					for(int i=0;i<=left;i++){
						temp.pb(v[i]);
					}
					add(temp,1);
					reverse(temp.begin(),temp.end());
					for(auto x : temp){
						cout<<x;
					}
					reverse(temp.begin(),temp.end());
					for(auto x : temp){
						cout<<x;
					}
					cout<<endl;
					}
				
		else{

			int i=left,j=right;
			while(i >= 0 and j<v.size()){
				if(v[i] == v[j]){
					i--;
					j++;
					continue;
				}

				else if(v[i] > v[j]){
					for(int i=0;i<=left;i++){
						cout<<v[i];
					}
					for(int i=left;i>=0;i--){
						cout<<v[i];
					}
					cout<<endl;
					break;
				}

				else if(v[i] < v[j]){
					vector<int> temp;
					for(int i=0;i<=left;i++){
						temp.pb(v[i]);
					}
					add(temp,1);
					reverse(temp.begin(),temp.end());
					for(auto x : temp){
						cout<<x;
					}
					reverse(temp.begin(),temp.end());
					for(auto x : temp){
						cout<<x;
					}
					cout<<endl;
					break;

				}
				

		}

	}
}
	else if(odd(v.size()) and (not vis)){
		goforodd(v);
	}
	}
}

