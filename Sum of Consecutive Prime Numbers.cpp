#include<iostream>
#include<vector>
using namespace std;
vector<bool> prime(10001,false);
vector<long long int> v;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	for(long long int i=2;i<10001;i++){
		if(prime[i]==false){
			v.push_back(i);
			for(long long int j=i*i;j<10001;j+=i){
				prime[j]=true;
			}
		}
	}
	while(cin>>n){
		if(n==0){
			break;
		}
		long long int temp=0;
		for(long long int i=0;v[i]<=n;i++){
			long long int sum=0;
			for(long long int j=i;sum<n;j++){
				sum+=v[j];
				if(sum==n){
					temp++;
					break;
				}
			}
		}
		cout<<temp<<'\n';
	}
	return 0;
}
