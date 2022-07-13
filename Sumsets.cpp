#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		vector<long long int> num(n,0);
		for(long long int i=0;i<n;i++){
			cin>>num[i];
		}
		sort(num.begin(),num.end());
		int find=0;
		long long int ans=0;
		for(long long int d=n-1;d>=0&&find==0;d--){
			for(long long int a=0;a<n&&find==0;a++){
				if(a==d){
					continue;
				}
				for(long long int b=a+1;b<n&&find==0;b++){
					if(b==d){
						continue;
					}
					for(long long int c=b+1;c<n&&find==0;c++){
						if(c==d){
							continue;
						}
						if(num[a]+num[b]+num[c]==num[d]){
							find=1;
							ans=num[d];
						}
					}
				}
			}
		}
		if(find==1){
			cout<<ans<<'\n';
		}
		else{
			cout<<"no solution"<<'\n';
		}
	}
}
