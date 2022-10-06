#include<iostream>
#include<vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	cin>>n;
	for(long long int w=0;w<n;w++){
		long long int day;
		cin>>day;
		long long int num;
		cin>>num;
		vector<int> table(day+1,1);
		for(long long int i=0;i<num;i++){
			long long int period;
			cin>>period;
			for(long long int j=1;j<=day;j++){
				if(j%period==0&&j%7!=6&&j%7!=0){
					table[j]=0;
				}
			}
		}
		int ans=0;
		for(long long int i=1;i<=day;i++){
			if(table[i]==0){
				ans=ans+1;
			}
		}
		cout<<ans<<'\n';
	}
}
