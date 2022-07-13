#include<iostream>
#include<vector>
using namespace std;
vector<int> ans;

void solve(long long int n){
	while(n!=1){
		int flag=1;
		int i=9;
		while(flag==1){
			if(n%i==0){
				ans.push_back(i);
				n/=i;
				break;
			}
			i--;
			if(i==1){
				flag=0;
			}
		}
		if(flag==0){
			cout<<"-1"<<'\n';
			return;
		}
	}
	for(int i=ans.size()-1;i>=0;i--){
		cout<<ans[i];
	}
	cout<<'\n';
}

int main(){
	long long int n,k;
	cin>>n;
	for(long long int i=0;i<n;i++){
		ans.clear();
		cin>>k;
		if(k==1){
			cout<<"1"<<'\n';
		}
		else{
			solve(k);
		}
	}
	return 0;
}
