#include<iostream>
#include<math.h>
using namespace std;
bool prime(long long n){
	if(n%2==0 && n!=2){
		return false;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int cnt=1; // 2 is prime
	long long n=3;
	while(cnt!=10001){
		if(prime(n)){
			cnt++;
		}
		n+=2;
	}
	cout<<n-2;
	return 0;
}
