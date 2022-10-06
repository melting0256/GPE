#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
	long long int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		priority_queue<long long int,vector<long long int>,greater<long long int> > pq;
		for(long long int i=0;i<n;i++){
			long long int a;
			cin>>a;
			pq.push(a);
		}
		long long int count=0;
		for(long long int i=0;i<n-1;i++){
			long long int a=pq.top();
			pq.pop();
			long long int b=pq.top();
			pq.pop();
			count=count+a+b;
			pq.push(a+b);
		}
		cout<<count<<'\n';
	}
}
