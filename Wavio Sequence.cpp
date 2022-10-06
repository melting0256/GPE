#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int n;
	while(cin>>n){
		vector<long long int> num(n);
		for(long long int i=0;i<n;i++){
			cin>>num[i];
		}
		vector<long long int> idp(n);
		vector<long long int> v1;
		vector<long long int>::iterator it;
		v1.push_back(num[0]);
		idp[0]=1;
		long long int l=1;
		for(long long int i=1;i<n;i++){
			if(num[i]<=v1.back()){
				it=lower_bound(v1.begin(),v1.end(),num[i]);
				*it=num[i];
				idp[i]=it-v1.begin()+1;
			}
			else{
				v1.push_back(num[i]);
				l++;
				idp[i]=l;
			}
		}
		vector<long long int> v2;
		vector<long long int> ddp(n);
		v2.push_back(num[n-1]);
		ddp[n-1]=1;
		l=1;
		for(long long int i=n-2;i>=0;i--){
			if(num[i]>v2.back()){
				v2.push_back(num[i]);
				l++;
				ddp[i]=l;
			}
			else{
				it=lower_bound(v2.begin(),v2.end(),num[i]);
				*it=num[i];
				ddp[i]=it-v2.begin()+1;
			}
		}
				
		long long int large=0;
		for(long long int i=0;i<n;i++){
			long long int small=min(idp[i],ddp[i]);
			if(small>large){
				large=small;
			}
		}
		cout<<2*large-1<<'\n';
	}
}
