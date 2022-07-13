#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int m,n;
	cin>>m>>n;
	string str;
	long long int money;
	map<string,long long int> val;
	for(long long int i=0;i<m;i++){
		cin>>str>>money;
		val[str]=money;
	}
	string s;
	for(long long int i=0;i<n;i++){
		long long int sum=0;
		while(cin>>s&&s!="."){
			if(val.count(s)){
				sum+=val[s];
			}
		}
		cout<<sum<<'\n';
	}
	return 0;
} 
