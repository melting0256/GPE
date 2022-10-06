#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	string n,m;
	while(getline(cin,n)){
		getline(cin,m);
		if(n==""){
			cout<<"0"<<'\n';
			continue;
		}
		if(m==""){
			cout<<"0"<<'\n';
			continue;
		}
		long long int n_len=n.length();
		long long int m_len=m.length();
		vector<vector<int> > len(n_len+1,vector<int>(m_len+1,0));
		m=" "+m;
		n=" "+n;
		for(long long int i=1;i<=n_len;i++){
			for(long long int j=1;j<=m_len;j++){
				if(n[i]==m[j]){
					len[i][j]=len[i-1][j-1]+1;
				}
				else{
					len[i][j]=max(len[i-1][j],len[i][j-1]);
				}
			}
		}
		cout<<len[n_len][m_len]<<'\n';
	}
}
