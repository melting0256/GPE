#include <iostream>
using namespace std;
  
int solve(int x) {
    int ret=0;
    while (x!=0) {
        ret+=x%10;
        x/=10;
    }
    if (ret<10) return ret;
    else return solve(ret);
}
  
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
	int n;
    while (cin>>n&&n) {
        cout<<solve(n)<<'\n';
    }
    return 0;
}
