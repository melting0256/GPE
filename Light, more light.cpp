#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		long long int ref=sqrt(n);
		if(ref*ref!=n){
			cout<<"no"<<'\n';
		}
		else{
			cout<<"yes"<<'\n';
		}
	}
}
