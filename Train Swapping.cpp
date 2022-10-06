#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int t;
	cin>>t;
	for(long long int w=0;w<t;w++){
		long long int m;
		cin>>m;
		vector<long long int> a(m,0);
		for(long long int i=0;i<m;i++){
			cin>>a[i];
		}
		long long int ans=0;
		for(long long int i=0;i<m-1;i++){
			for(long long int j=i+1;j<m;j++){
				if(a[i]>a[j]){
					swap(a[i],a[j]);
					ans=ans+1;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<ans<<" swaps."<<'\n';
	}
}
