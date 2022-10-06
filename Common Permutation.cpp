#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	string a,b;
	while(getline(cin,a)&&getline(cin,b)){
		map<char,int> num_a,num_b;
		for(long long int i=0;i<a.length();i++){
			num_a[a[i]]+=1;
		}
		for(long long int i=0;i<b.length();i++){
			num_b[b[i]]+=1;
		}
		string s;
		map<char,int>::iterator it1;
		map<char,int>::iterator it2;
		for(it1=num_a.begin();it1!=num_a.end();it1++){
			it2=num_b.find(it1->first);
			if(it2!=num_b.end()){
				long long int len=min(it1->second,it2->second);
				for(long long int i=0;i<len;i++){
					s+=it1->first;
				}
			}
		}
		cout<<s<<'\n';
	}
}
