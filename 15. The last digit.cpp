#include<iostream>
using namespace std;
 int power(long long a, long long b){
	long long ans = 1; 	
	while(b>0){
 
		if(b&1){
			ans = (ans*a)%10;
		}
			a = (a*a)%10;
			b = b/2;
		
	}
	return ans;
}
int main(){
	int TC;
		cin>>TC;
		while(TC--){
			long long a,b;
			cin>>a>>b;
			int ans = power(a,b);
			cout<<ans<<endl;
		}
	
} 
