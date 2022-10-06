#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int n;
	while(cin>>n){
		long long int m;
		cin>>m;
		vector<bool> stanwin(n+1,false);
		vector<long long int> step(m);
		for(long long int i=0;i<m;i++){
			cin>>step[i];
		}
		sort(step.begin(),step.end());
		for(long long int i=0;i<=n;i++){
			for(long long int j=0;j<m;j++){
				if(i>=step[j]&&stanwin[i-step[j]]==false){
					stanwin[i]=true;
				}
			}
		}
		if(stanwin[n]==1){
			cout<<"Stan wins"<<'\n';
		}
		else if(stanwin[n]==0){
			cout<<"Ollie wins"<<'\n';
		}
	}
}
