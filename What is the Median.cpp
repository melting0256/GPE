#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	vector<int> num;
	while(cin>>n){
		num.push_back(n);
		sort(num.begin(),num.end());
		int len=num.size();
		if(len%2==0){
			int ans;
			ans=(num[len/2-1]+num[len/2])/2;
			cout<<ans<<'\n';
		}
		else{
			cout<<num[len/2]<<'\n';
		}
	}
}
