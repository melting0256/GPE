#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	string s;
	vector<string> v;
	string word="";
	long long int num=0;
	string w;
	while(getline(cin,s)){
		if(s=="0"){
			break;
		}
		s=s+"\n";
		for(long long int i=0;i<s.size();i++){
			if(isalpha(s[i])){
				word=word+s[i];
			}
			else if(isdigit(s[i])){
				num=num*10;
				num=num+(s[i]-'0');
			}
			else{	//空白或符號 
				if(num!=0){
					w=v[num-1];
					cout<<w;
					for(long long int j=num-1;j>0;j--){
						v[j]=v[j-1];
					}
					v[0]=w;
					num=0;
				}
				if(word!=""){
					cout<<word;
					if(v.empty()){
						v.push_back(word);
					}
					else{
						v.push_back(v.back());
						for(long long int j=v.size()-2;j>0;j--){
							v[j]=v[j-1];
						}
						v[0]=word;
					}
					word="";
				}
				cout<<s[i];
			}
		}
	}
	return 0;
}
