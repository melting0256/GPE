#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int n;
	while(cin>>n){
		vector<long long int> num(n);
		for(long long int i=0;i<n;i++){
			cin>>num[i];
		}
		sort(num.begin(),num.end());
		long long int mid1=num[(n-1)/2];
		long long int mid2=num[n/2];
		long long int ans=0;
		for(long long int i=0;i<n;i++){
			if(num[i]==mid1){
				ans++;
			}
			else if(num[i]==mid2){
				ans++;
			}
		}
		cout<<mid1<<" "<<ans<<" "<<mid2-mid1+1<<'\n';
	}
}
