#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	string str;
	int num[20]={0,1,5,2,8,3,9,2,8,7,7,8,4,7,3,8,4,1,5,4};
	while(cin>>str){
		if(str.length()==1&&str=="0"){
			break;
		}
		int val=str[str.length()-1]-'0';
		if(str.length()>1){
			val+=(str[str.length()-2]-'0')*10;
		}
		cout<<(num[val%20]+val/20*4)%10<<'\n';
	}
}
