#include<iostream>
#include<vector>
using namespace std;

long long int reverse(long long int a){
	long long int ans=0;
	while(a!=0){
		ans=ans*10+(a%10);
		a=a/10;
	}
	return ans;
}



int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	cin>>n;
	for(long long int w=0;w<n;w++){
		long long int ini;
		cin>>ini;
		long long int time=1;
		while(1){
			long long int rev=reverse(ini);
			ini+=rev;
			if(ini==reverse(ini)){
				cout<<time<<" "<<ini<<'\n';
				break;
			}
			time++;
		}
	}
}
