#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		vector<int> num(6,0);
		num[0]=1;
		num[1]=6;
		num[2]=2;
		num[3]=5;
		num[4]=3;
		num[5]=4;
		for(long long int i=0;i<n;i++){
			string str;
			cin>>str;
			int temp;
			if(str=="north"){
				temp=num[0];
				num[0]=num[3];
				num[3]=num[1];
				num[1]=num[2];
				num[2]=temp;
			}
			else if(str=="west"){
				temp=num[0];
				num[0]=num[5];
				num[5]=num[1];
				num[1]=num[4];
				num[4]=temp;
			}
			else if(str=="east"){
				temp=num[0];
				num[0]=num[4];
				num[4]=num[1];
				num[1]=num[5];
				num[5]=temp;
			}
			else if(str=="south"){
				temp=num[0];
				num[0]=num[2];
				num[2]=num[1];
				num[1]=num[3];
				num[3]=temp;
			}
		}
		cout<<num[0]<<'\n';
	}
}
