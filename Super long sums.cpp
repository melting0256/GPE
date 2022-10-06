#include<iostream>
#include<vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	for(long long int w=0;w<n;w++){
		long long int digit;
		cin>>digit;
		vector<int> a(digit,0);
		vector<int> b(digit,0);
		for(long long int i=0;i<digit;i++){
			cin>>a[i]>>b[i];
		}
		vector<int> result(digit,0);
		for(long long int i=digit-1;i>=0;i--){
			result[i]=a[i]+b[i];
		}
		for(long long int i=digit-1;i>0;i--){
			if(result[i]>=10){
				result[i-1]+=(result[i]/10);
				result[i]=result[i]%10;
			}
		}
		vector<int>::iterator it;
		for(it=result.begin();it!=result.end();it++){
			cout<<*it;
		}
		cout<<'\n';
		if(n!=0){
			cout<<'\n';
		}
	}
}
