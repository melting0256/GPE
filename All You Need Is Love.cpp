#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

long long int gcd(long long int a,long long int b){
	while((a%=b)&&(b%=a));
	return a+b;
}

long long int tran(long long int a){
	long long int i=0;
	long long int m;
	long long int sum=0;
	while(a!=0){
		m=a%10;
		a=a/10;
		sum+=m*pow(2,i);
		i++;
	}
	return sum;
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	cin>>n;
	long long int s1,s2;
	long long int d1,d2;
	vector<pair<long long int,long long int> > v;
	for(long long int i=0;i<n;i++){
		cin>>s1>>s2;
		d1=tran(s1);
		d2=tran(s2); 
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
