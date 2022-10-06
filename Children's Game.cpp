#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

bool comp(string a,string b){
	return a+b>b+a;
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		vector<string> v;
		string str;
		for(long long int i=0;i<n;i++){
			cin>>str;
			v.push_back(str);
		}
		sort(v.begin(),v.end(),comp);
		vector<string>::iterator it;
		for(it=v.begin();it!=v.end();it++){
			cout<<*it;
		}
		cout<<'\n';
	}
}
