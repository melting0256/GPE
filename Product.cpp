#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int x[255],y[255];
	string a;
	while(getline(cin,a)){
		for(int i=0;i<a.size();i++){
			x[i]=a[a.size()-i-1]-'0';
		}
		string b;
		getline(cin,b);
		for(int i=0;i<b.size();i++){
			y[i]=b[b.size()-i-1]-'0';
		}
		int ans[501]={0};
		for(int i=0;i<a.size();i++){
			for(int j=0;j<b.size();j++){
				ans[i+j]+=x[i]*y[j];
				ans[i+j+1]+=ans[i+j]/10;
				ans[i+j]=ans[i+j]%10;
			}
		}
		int anslen=a.size()+b.size();
		while(anslen>1&&!ans[anslen-1]){
			anslen--;
		}
		for(int i=anslen-1;i>=0;i--){
			cout<<ans[i];
		}
		cout<<'\n';
		
	}
}
