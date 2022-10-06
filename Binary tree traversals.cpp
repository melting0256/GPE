#include<iostream>
#include<vector>
using namespace std;
vector<char> inorder;
vector<char> preorder;

void printpostorder(long long int pre_left,long long int pre_right,long long int in_left,long long int in_right){
	long long int parent_position,left_size,right_size;
	for(parent_position=in_left;parent_position<=pre_right;parent_position++){
		if(inorder[parent_position]==preorder[pre_left]){
			break;
		}
	}
	left_size=parent_position-in_left;
	right_size=in_right-parent_position;
	
	if(left_size>0){
		printpostorder(pre_left+1,pre_left+left_size,in_left,parent_position-1);
	}
	if(right_size>0){
		printpostorder(pre_left+left_size+1,pre_right,parent_position+1,in_right);
	}
	if(inorder[parent_position]==preorder[0]){
		cout<<inorder[parent_position];
	}
	else{
		cout<<inorder[parent_position]<<" ";
	}
}


int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	cin>>n;
	while(n--){
		long long int size;
		cin>>size;
		inorder.clear();
		preorder.clear();
		inorder.resize(size);
		preorder.resize(size);
		for(long long int i=0;i<size;i++){
			cin>>preorder[i];
		}
		for(long long int i=0;i<size;i++){
			cin>>inorder[i];
		}
		printpostorder(0,size-1,0,size-1);
		cout<<'\n';
	} 
}
