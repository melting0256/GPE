#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	char str[100001],rev[100001];
	while(gets(str)){
		int fail[100001]={-1};
		int len=strlen(str);
		reverse_copy(str,str+len,rev);
		int i,j;
		
		for(i=1,j=-1;i<len;i++){	
			while(j>=0&&rev[j+1]!=rev[i]){
				j=fail[j];
			}
			if(rev[j+1]==rev[i]){
				j++;
			}
			fail[i]=j;
		}
		
		for(i=0,j=-1;i<len;i++){	
			while(j>=0&&rev[j+1]!=str[i]){
				j=fail[j];
			}
			if(rev[j+1]==str[i]){
				j++;
			}
		}
		for(i=0;i<len;i++){
			cout<<str[i];
		}
		for(j=j+1;j<len;j++){
			cout<<rev[j];
		}
		cout<<'\n';
	}
}
