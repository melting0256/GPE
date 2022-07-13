#include<iostream>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		for(long long int m=1;m>0;m++){
			int temp=0;
			for(long long int i=1;i<n;i++){
				temp=(temp+m)%i;
			}
			if(temp==11){
				cout<<m<<'\n';
				break;
			}
		}
	}
}
