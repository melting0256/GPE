#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		map<long long int,long long int> mp;
		vector<long long int> v(5);
		for(long long int i=0;i<n;i++){
			for(int j=0;j<5;j++){
				cin>>v[j];
			}
			sort(v.begin(),v.end());
			long long int num=0;
			for(int j=0;j<5;j++){
				num=num*1000;
				num+=v[j];
			}
			mp[num]+=1;
		}
		long long int lar=0;
		map<long long int,long long int>::iterator it;
		for(it=mp.begin();it!=mp.end();it++){
			lar=max(lar,it->second);
		}
		long long int ans=0;
		for(it=mp.begin();it!=mp.end();it++){
			if(it->second==lar){
				ans+=lar;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
