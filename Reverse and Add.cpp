#include<iostream>
#include<vector>
using namespace std;

int reverse(int ini){
	int result=0;
	while(ini!=0){
		result=10*result+(ini%10);
		ini=ini/10;
	}
	return result;
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i==0;i<n;i++){
		int ini;
		cin>>ini;
		time=1;
		while(1){
			int rev=reverse(ini);
			ini+=rev;
			if(ini==reverse(ini)){
				cout<<time<<" "<<ini<<'\n';
				break;
			}
			time++;
		}
	}
}
