#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		vector<int> move(n);
		string s;
		getline(cin,s);
		for(long long int i=0;i<n;i++){
			getline(cin,s);
			if(s=="LEFT"){
				move[i]=-1;
			}
			else if(s=="RIGHT"){
				move[i]=1;
			}
			else{
				long long int temp=0;
				for(long long int j=8;j<s.size();j++){
					temp=temp*10;
					temp+=s[j]-'0';
				}
				move[i]=move[temp-1];
			}
		}
		long long int ans=0;
		for(long long int i=0;i<n;i++){
			ans+=move[i];
		}
		cout<<ans<<'\n';
	}
}
