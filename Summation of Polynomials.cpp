#include<iostream>
using namespace std;

int main(){
	long long int n;
	while(cin>>n){
		long long int ans;
		ans=n*n*(n+1)*(n+1)/4;
		cout<<ans<<'\n';
	}
}
