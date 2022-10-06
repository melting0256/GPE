#include<iostream>
#include<vector>
#include<cstring>
#include<map>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	map<char,vector<int> > mp;
    mp['c'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    mp['d'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['e'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['f'] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['g'] = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['a'] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['b'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    mp['C'] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['D'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['E'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['F'] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['G'] = {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['A'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['B'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
	long long int n;
	cin>>n;
	for(long long int w=0;w<n;w++){
		string s;
		cin>>s;
		vector<long long int> ans(11,0);
		vector<int> flag(11,0); 
		for(long long int i=0;i<s.size();i++){
			for(long long int j=1;j<=10;j++){
				if(mp[s[i]][j]==1){
					if(flag[j]==1){
						continue;
					}
					else{
						ans[j]+=1;
						flag[j]=1;
					}
				}
				else{
					flag[j]=0;
				}
			}
		}
		for(long long int i=1;i<=10;i++){
			cout<<ans[i]<<" ";
		}
		cout<<'\n';
	}
}
