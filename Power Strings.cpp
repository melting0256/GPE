#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	string s;
	while(cin>>s){
		if(s=="."){
			break;
		}
		long long int ans=1;
		for(long long int i=s.size();i>=1;i--){
			int flag=1;
			if(s.size()%i==0){
				string first=s.substr(0,i);
				for(long long int j=i;j<s.size();j+=i){
					if(s.substr(j,i)!=first){
						flag=0;
						break;
					}
				}
				if(flag==1){
					ans=i;
				}
			}
		}
		ans=s.size()/ans;
		cout<<ans<<'\n'; 
	}
}
