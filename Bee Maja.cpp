#include<iostream>
using namespace std;

int main(){
	long long int n;
	while(cin>>n){
		long long int sum=0;
		long long int pw=0;
		while(sum<n){
			pw=pw+1;
			sum=sum+pw*6;
		}
		sum=sum-pw*6;
		n=n-sum;
		if(n==1){	//°_©lÂI 
			int temp=pw-1;
			cout<<temp<<" 0"<<'\n';
		}
		else{
			long long int px=pw;
			long long int py=0;
			n=n-1;
			long long int t=pw;
			while(n&&t){
				n--;
				t--;
				px--;
				py++;
			}
			t=pw;
			while(n&&t){
				n--;
				t--;
				px--;
			}
			t=pw;
			while(n&&t){
				n--;
				t--;
				py--;
			}
			t=pw;
			while(n&&t){
				n--;
				t--;
				px++;
				py--;
			}
			t=pw;
			while(n&&t){
				n--;
				t--;
				px++;
			}
			t=pw;
			while(n&&t){
				n--;
				t--;
				py++;
			}
			cout<<px<<" "<<py<<'\n';
		}
	}
	return 0;
}
