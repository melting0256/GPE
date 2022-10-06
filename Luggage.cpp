#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	cin>>n;
	string s;
	getline(cin,s);
	while(n--&&getline(cin,s)){
		int temp;
		long long int sum=0;
		stringstream input(s);
		vector<int> dp(2001,0);
		dp[0]=1;
		while(input>>temp){
			sum=sum+temp;
			for(int i=2000;i>=0;i--){
				if(dp[i]==1){
					dp[i+temp]=1;
				}
			}
		}
		if(sum%2==0){
			if(dp[sum/2]==1){
				cout<<"YES"<<'\n';
			}
			else{
				cout<<"NO"<<'\n';
			}
		}
		else{
			cout<<"NO"<<'\n';
		}
	}
}
