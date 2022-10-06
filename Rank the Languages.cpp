#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
map<char,long long int> alpha;
char a[500][500];
long long int h;
long long int w;

void bfs(long long int x,long long int y){
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,1,-1};
	queue<pair<long long int,long long int> > q;
	q.push({x,y});
	char target=a[x][y];
	a[x][y]='0';
	while(!q.empty()){
		pair<long long int,long long int> now;
		now=q.front();
		q.pop();
		x=now.first;
		y=now.second;
		for(int i=0;i<4;i++){
			long long int nx=x+dx[i];
			long long int ny=y+dy[i];
			if(nx>=0&&nx<h&&ny>=0&&ny<w&&target==a[nx][ny]){
				q.push({nx,ny});
				a[nx][ny]='0';
			}
		}
	}
	alpha[target]++; 
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	cin>>n;
	long long int time=1;
	while(n--){
		cin>>h>>w;
		string s;
		for(long long int i=0;i<h;i++){
			cin>>s;
			for(long long int j=0;j<w;j++){
				a[i][j]=s[j];
			}
		}
		alpha.clear();
		while(1){
			int flag=0;
			long long int x;
			long long int y;
			for(long long int i=0;i<h;i++){
				for(long long int j=0;j<w;j++){
					if(a[i][j]!='0'){
						x=i;
						y=j;
						flag=1;
						break;
					}
				}
				if(flag==1){
					break;
				}
			}
			if(flag==1){
				bfs(x,y);
			}
			else{
				break;
			}
		}
		long long int mx=0;
		map<char,long long int>::iterator it;
		for(it=alpha.begin();it!=alpha.end();it++){
			mx=max(it->second,mx);
		}
		cout<<"World #"<<time<<'\n';
		time++;
		while(mx){
			for(it=alpha.begin();it!=alpha.end();it++){
				if(mx==it->second){
					cout<<it->first<<": "<<it->second<<'\n';
				}
			}
			mx=mx-1;
		}
	}
}
