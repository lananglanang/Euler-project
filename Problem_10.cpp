#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n){
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
	int a=3;
	long long sum=2;
	while(a<2000000){
		if(prime(a)){
			sum+=a;
		}
		a+=2;
	}
	cout<<sum;
	
	return 0;
}
