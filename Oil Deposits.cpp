#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
char v[101][101];
long long int m,n;

void flood(long long int x,long long int y){
	long long int nx;
	long long int ny;
	int dx[8]={1,-1,0,0,1,1,-1,-1};
	int dy[8]={0,0,1,-1,1,-1,1,-1};
	for(int i=0;i<8;i++){
		nx=x+dx[i];
		ny=y+dy[i];
		if(nx>=0&&nx<m&&ny>=0&&ny<n&&v[nx][ny]=='@'){
			v[nx][ny]='*';
			flood(nx,ny);
		}	
	}
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	while(cin>>m>>n){
		if(m==0&&n==0){
			break;
		}
		string s;
		memset(v,'\0',sizeof(v));
		for(long long int i=0;i<m;i++){
			cin>>s;
			for(long long int j=0;j<n;j++){
				v[i][j]=s[j];
			}
		}
		long long int ans=0;
		for(long long int i=0;i<m;i++){
			for(long long int j=0;j<n;j++){
				if(v[i][j]=='@'){
					ans++;
					flood(i,j);
				}
			}
		}
		cout<<ans<<'\n';
	}
}
