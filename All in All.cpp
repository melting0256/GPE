#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a,b;
	while(cin>>a>>b){
		long long int n1=0;
		long long int n2=0;
		while(n1<a.size()&&n2<b.size()){
			if(a[n1]==b[n2]){
				n1++;
				n2++;
			}
			else{
				n2++;
			}
		}
		if(n1==a.size()){
			cout<<"Yes"<<'\n';
		}
		else{
			cout<<"No"<<'\n';
		}
	}
}
