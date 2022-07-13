#include<iostream>
#include<stack>
#include<cstring>
#include<cctype>
#include<sstream>
#include<vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	string str;
	while(getline(cin,str)){
		vector<string> result;
		if(str=="."){
			break;
		}
		string temp;
		stringstream input(str);
		while(input>>temp){
			result.push_back(temp);
		}
		stack<int> cal;
		int flag=0;
		for(int i=result.size()-1;i>=0;i--){
			if(result[i]=="+"){
				if(cal.size()>=2){
					int a=cal.top();
					cal.pop();
					int b=cal.top();
					cal.pop();
					int ans=a+b;
					cal.push(ans);
				}
				else{
					cout<<"illegal"<<'\n';
					flag=1;
					break;
				}
			}
			else if(result[i]=="-"){
				if(cal.size()>=2){
					int a=cal.top();
					cal.pop();
					int b=cal.top();
					cal.pop();
					int ans=a-b;
					cal.push(ans);
				}
				else{
					cout<<"illegal"<<'\n';
					flag=1;
					break;
				}
			}
			else if(result[i]=="*"){
				if(cal.size()>=2){
					int a=cal.top();
					cal.pop();
					int b=cal.top();
					cal.pop();
					int ans=a*b;
					cal.push(ans);
				}
				else{
					cout<<"illegal"<<'\n';
					flag=1;
					break;
				}
			}
			else if(result[i]=="/"){
				if(cal.size()>=2){
					int a=cal.top();
					cal.pop();
					int b=cal.top();
					cal.pop();
					int ans=a/b;
					cal.push(ans);
				}
				else{
					cout<<"illegal"<<'\n';
					flag=1;
					break;
				}
			}
			else if(result[i]=="%"){
				if(cal.size()>=2){
					int a=cal.top();
					cal.pop();
					int b=cal.top();
					cal.pop();
					int ans=a%b;
					cal.push(ans);
				}
				else{
					cout<<"illegal"<<'\n';
					flag=1;
					break;
				}
			}
			else{
				int num;
				num=stoi(result[i]);
				cal.push(num);
			}
		}
		if(flag==0){
			cout<<cal.top()<<'\n';
		}
	}
}
