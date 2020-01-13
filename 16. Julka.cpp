#include <bits/stdc++.h>
using namespace std;

vector<int> add(vector<int> x , vector<int> y){
	
	reverse(x.begin(),x.end());
	reverse(y.begin(),y.end());

	int len = min(x.size(),y.size());
	int carry = 0;

	vector<int> ans;

	for(int i=0;i<len;i++){
		int sum = x[i]+y[i]+carry;
		ans.push_back(sum%10);
		carry = sum/10;
	}

	if(len < x.size()){
		for(int i=len;i<x.size();i++){
			int sum = x[i] + carry;
			ans.push_back(sum%10);
			carry = sum/10;
		}
	}

	if(len < y.size()){
		for(int i=len;i<y.size();i++){
			int sum = y[i] + carry;
			ans.push_back(sum%10);
			carry = sum/10;
		}
	}
	while(carry){
		ans.push_back(carry%10);
		carry = carry/10;
	}
	reverse(ans.begin(),ans.end());
	
	return ans;

}

vector<int> subtract(vector<int> ans , vector<int> y){
	
	reverse(ans.begin(),ans.end());
	reverse(y.begin(),y.end());
	int len = min(ans.size(),y.size());
	
	vector<int> diff;
	for(int i=0;i<len;i++){
		if(ans[i] >= y[i]){
			diff.push_back(ans[i]-y[i]);
		}
		else{
			int val = (ans[i] + 10 - y[i]);
			diff.push_back(val);
			int next = i+1;
			--ans[next];
		}
	}

	if(len < ans.size()){
		diff.push_back(ans[len++]);
	}

	reverse(diff.begin(),diff.end());
	int i=0;
	while(diff[i] == 0){
		i++;
	}
	diff.erase(diff.begin(),diff.begin()+i);
	return diff;

}
vector<int> division(vector<int> ans){
	
	vector<int> div;
	int val = 0;

	for(int i=0; i < ans.size() ; i++){
		if(val){
			val = val*10 + ans[i];
			div.push_back(val/2);
			val = val%2;
		}
		else{
			if(ans[i] < 2){
				val += ans[i];
				if(i)
				div.push_back(0);
			}
			else{
				div.push_back(ans[i]/2);
				val = ans[i]%2;
			}
		}
	}
	
	return div;
}
int main(){
	for(int i=0;i<10;i++){
	string s1,s2;
	cin>>s1>>s2;

	vector<int> x;
	vector<int> y;

	for(int i=0;i<s1.length();i++){
		x.push_back(s1[i] - '0');
	}
	for(int i=0;i<s2.length();i++){
		y.push_back(s2[i] - '0');
	}

	auto ans = add(x,y);
	auto div = division(ans);
	for(auto x : div){
		cout<<x;
	}
	
	cout<<endl;

	auto diff = subtract(x,div);
	for(auto x : diff){
		cout<<x;
	}
	cout<<endl;
}
	
}
