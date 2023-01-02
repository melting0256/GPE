#include<iostream>
using namespace std;

int main(){
	int num[3000]={1};
	int ans[1001]={1};
	int digit=1;
	long long int n;
	for(int i=2;i<=1000;i++){
		for(int j=0;j<digit;j++){
			num[j]=num[j]*i;
		}
		for(int j=0;j<digit;j++){
			num[j+1]=num[j+1]+num[j]/10;
			num[j]=num[j]%10;
			ans[i]+=num[j];
			if(j+1>=digit&&num[j+1]>0){
				digit=digit+1;
			}
		}
	}
	while(cin>>n){
		cout<<ans[n]<<'\n';
	}
}
