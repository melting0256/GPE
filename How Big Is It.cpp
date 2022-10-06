#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
//! https://blog.csdn.net/tengfei461807914/article/details/53143336
long long num_circle;
double ans;
vector<double>circle_radius; //�����U��circle��radius
vector<double>record_x; //�����C�رƪk��x�y��

double get_horizontal_dis(long long circle1, long long circle2){ //get horizontal center of circle distance between circle1 and circle2
double z = circle_radius[circle1] + circle_radius[circle2];
double x = abs(circle_radius[circle1] - circle_radius[circle2]);
return sqrt(z*z - x*x); //����w�z
}
void solve(){
// long long count = 1;
ans = MAXFLOAT; //�O�o�ninitialize
do{
double temp = -1; //�O�o�ninitialize
record_x[1] = circle_radius[1]; //�Ĥ@��x�y�Х��w�O�Ĥ@��circle��radius
for(long long i = 2; i < circle_radius.size(); ++i){ //�q�ĤG�Ӷ}�l
double temp_x = circle_radius[i];
for(long long j = 1; j < i; ++j){
//�n���L���e�@��circle������A�n���O(�e�@��circle��record_x + �P�e�@circle����ߤ����Z��)
//�a�|�e���Ҧ�circle�O�]���i��|���h��circle�����b���������Ŷ����i��
//��max�~�O���T���\�k(�e�ϲz��)
temp_x = max(temp_x, record_x[j] + get_horizontal_dis(i, j));
}
record_x[i] = temp_x; //��^record_x����
}
for(long long i = 1; i < circle_radius.size(); ++i){
//�o�즹�ƦC�U�̵u�n�h���~��e�ǩҦ�circle
//!���ઽ�����̫�@��record_x+�̫�@��circle_radius
temp = max(temp, record_x[i] + circle_radius[i]);
}
ans = min(ans, temp); //���U�ӱƦC���̤p��
}while(next_permutation(circle_radius.begin()+1, circle_radius.end())); //!�a�|�Ҧ�circle���ƦC
}

int main(){
long long n;
cin >> n;
while(n--){
cin >> num_circle;
circle_radius.resize(num_circle+1); //�qindex 1�~�}�l���1��circle
record_x.resize(num_circle+1, -1); //�qindex 1�~�}�l���1��record
for(long long i = 1; i < circle_radius.size(); ++i){
cin >> circle_radius[i];
}
sort(circle_radius.begin()+1, circle_radius.end());
solve();
cout << fixed << setprecision(3) << ans << endl;

}
return 0;
}
