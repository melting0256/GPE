#include<iostream>
using namespace std;

int main(){
	long long int s,d;
	while(cin>>s>>d){
		long long int t;
		t=s;
		d-=t;
		while(d>0){
			t++;
			d-=t;
		}
		cout<<t<<'\n';
	}
	return 0;
}
