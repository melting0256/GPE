#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	for(long long int w=0;w<t;w++){
		long long int m;
		cin>>m;
		long long int x,y;
		long long int num=0;
		vector<pair<long long int,long long int> > line;
		while(cin>>x>>y){
			if(x==0&&y==0){
				break;
			}
			line.push_back(make_pair(x,y));
			num++;
		}
		sort(line.begin(),line.end());
		vector<pair<long long int,long long int> > ans;
		long long int index=0;
		long long int l=0;
		while(l<m){
			int flag=0;
			long long int maxr=0;
			long long int maxindex=-1;
			while(index<num){
				if(line[index].first<=l){
					flag=1;
					if(line[index].second>maxr){
						maxr=line[index].second;
						maxindex=index;
					}
				}
				else{
					break;
				}
				index++;
			}
			if(flag==0){
				break;
			}
			else{
				ans.push_back(line[maxindex]);
				l=maxr;
			}
		}
		if(l>=m){
			cout<<ans.size()<<'\n';
			vector<pair<long long int,long long int> >::iterator it;
			for(it=ans.begin();it!=ans.end();it++){
				cout<<it->first<<" "<<it->second<<'\n';
			}
		}
		else{
			cout<<"0"<<'\n';
		}
		cout<<'\n';
	}
}
