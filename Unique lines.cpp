#include<iostream>
#include<vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int time;
	cin>>time;
	for(long long int w=0;w<time;w++){
		long long int n;
		cin>>n;
		long long int cal=n*(n-1)/2;
		vector<vector<long long int> > gradient(cal,vector<long long int>(4,0));
		vector<vector<long long int> > point(n,vector<long long int>(2,0));
		for(long long int i=0;i<n;i++){
			long long int x;
			long long int y;
			cin>>x>>y;
			point[i][0]=x;
			point[i][1]=y;
		}
		long long int count=0;
		for(long long int i=0;i<point.size();i++){
			long long int x1=point[i][0];
			long long int y1=point[i][1];
			for(long long int j=i+1;j<point.size();j++){
				long long int x2=point[j][0];
				long long int y2=point[j][1];
				long long int x=x1-x2;
				long long int y=y1-y2;
				gradient[count][0]=x;
				gradient[count][1]=y;
				gradient[count][2]=x1;
				gradient[count][3]=y1;
				count=count+1;
			}
		}
		long long int ans=0;
		for(long long int i=0;i<gradient.size();i++){
			int flag=1;
			for(long long int j=i+1;j<gradient.size();j++){
				long long int cal1=gradient[i][0]*gradient[j][1];
				long long int cal2=gradient[i][1]*gradient[j][0];
				if(cal1==cal2){
					long long int x=gradient[i][2]-gradient[j][2];
					long long int y=gradient[i][3]-gradient[j][3];
					if(x*gradient[i][1]==y*gradient[i][0]){
						flag=0;
						break;
					}
				}
			}
			if(flag==1){
				ans=ans+1;
			}
		}
		cout<<ans<<'\n';
	}
	
}
