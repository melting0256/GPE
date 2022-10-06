#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int cases=1;
	long long int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		string s;
		cin.ignore();
		vector<string> ans;
		vector<string> test;
		for(long long int i=0;i<n;i++){
			getline(cin,s);
			ans.push_back(s);
		}
		long long int m;
		cin>>m;
		cin.ignore();
		for(long long int i=0;i<m;i++){
			getline(cin,s);
			test.push_back(s);
		}
		cout<<"Run #"<<cases<<": ";
		cases=cases+1;
		vector<long long int> ans_num;
		vector<long long int> test_num;
		if(ans==test){
			cout<<"Accepted"<<'\n';
		}
		else{
			for(long long int i=0;i<ans.size();i++){
				for(long long int j=0;j<ans[i].length();j++){
					if(ans[i][j]>='0'&&ans[i][j]<='9'){
						ans_num.push_back((ans[i][j]-'0'));
					}
				}
			}
			for(long long int i=0;i<test.size();i++){
				for(long long int j=0;j<test[i].length();j++){
					if(test[i][j]>='0'&&test[i][j]<='9'){
						test_num.push_back((test[i][j]-'0'));
					}
				}
			}
			if(ans_num==test_num){
				cout<<"Presentation Error"<<'\n';
			}
			else{
				cout<<"Wrong Answer"<<'\n';
			}
		}
	}
}
