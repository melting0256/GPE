#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int money[11]={10000,5000,2000,1000,500,200,100,50,20,10,5};
	vector<long long int> dp(30001,0);
	dp[0]=1;
	for(int i=10;i>=0;i--){
		for(long long int j=money[i];j<=30000;j++){
			dp[j]+=dp[j-money[i]];
		}
	}
	int a,b;
	while(scanf("%d.%d",&a,&b)!=EOF&&!(a==0&&b==0)){
		int n2;
		n2=100*a+b;
		printf("%3d.%02d%17lld\n",a,b,dp[n2]);
	}
	return 0;
}
