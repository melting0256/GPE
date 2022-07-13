#include<iostream>
#include<sstream>
#include<map>
#include<vector>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	string str;
	int flag=0;
	map<string,long long int> mp;
	while(getline(cin,str)){
		flag=1;
		if(str=="EndOfText"){
			break;
		}
		for(long long int i=0;i<str.length();i++){
			if(isupper(str[i]) || islower(str[i])){
				str[i]=tolower(str[i]);
			}
			else{
				str[i]=' ';
			}
		}
		string temp;
		stringstream input(str);
		while(input>>temp){
			mp[temp]+=1;
		}
	}
	map<string,long long int>::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		if(it->second==n&&it->first.length()>0){
			cout<<it->first<<'\n';
			flag=0;
		}
	}
	if(flag==1){
		cout<<"There is no such word.";
	}
}
