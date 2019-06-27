#include<iostream>
using namespace std;
int fastPowerBitmasking(int a,int n){

	int ans = 1;
	while(n>0){
		if(n&1){
			ans *= a;
		}
		a *= a;
		n >>=1;
	}
	return ans;

}


int main(){

	cout<<fastPowerBitmasking(5,3)<<endl;

	return 0;
}
