#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;

long long int gcd(long long int a,long long int b){
	while((a%=b)&&(b%=a));
	return a+b;
}


int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	cin>>n;
	string s1,s2;
	long long int d1,d2;
	vector<pair<long long int,long long int> > v;
	for(long long int i=0;i<n;i++){
		cin>>s1>>s2;
		d1=0;
		d2=0;
		for(long long int j=0;j<s1.size();j++){
			d1=d1*2;
			d1+=s1[j]-'0';
		}
		for(long long int j=0;j<s2.size();j++){
			d2=d2*2;
			d2+=s2[j]-'0';
		}
		v.push_back(make_pair(d1,d2));
	}
	for(long long int i=0;i<n;i++){
		pair<long long int,long long int> p=v[i];
		long long int ans=gcd(p.first,p.second);
		if(ans>1){
			cout<<"Pair #"<<i+1<<": "<<"All you need is love!"<<'\n';
		}
		else{
			cout<<"Pair #"<<i+1<<": "<<"Love is not all you need!"<<'\n'; 
		}
		
	}
}
