#include<bits/stdc++.h>
using namespace std; 
int main() 
{ 
	int TC;
	cin>>TC;

	while(TC--){
		int x;
		cin>>x;
		long long int val,sum=0;
		for(int i=0;i<x;i++){
			cin>>val;
			sum = sum%x + val%x;
			sum%=x;
		}
		if(!sum)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
} 
