#include<iostream>
#include<vector>
using namespace std;

int main(){
	long long int n;
	while(cin>>n){
		long long int sum=n;
		long long int bottle=n;
		while(bottle>=3){
			sum+=(bottle/3);
			bottle=(bottle/3)+(bottle%3);
		}
		if(bottle==2){
			sum=sum+1;
		}
		cout<<sum<<'\n';
	}
}
