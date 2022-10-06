#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int dp[55][55];
int a[55];

int solve(int x,int y){
	if(~dp[x][y]){
		return dp[x][y];
	}
	if(x+1==y){
		return dp[x][y]=0;
	}
	int cost=0x3F3F3F3F;
	for(int i=x+1;i<y;i++){
		cost=min(cost,solve(x,i)+solve(i,y));
	}
	return dp[x][y]=cost+a[y]-a[x];
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int l;
	while(cin>>l){
		if(l==0){
			break;
		}
		int n;
		cin>>n;
        memset(a, 0, sizeof(a));
        memset(dp, -1, sizeof(dp));
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		a[n+1]=l;
		cout<<"The minimum cutting is "<<solve(0,n+1)<<"."<<'\n';
	}
}
