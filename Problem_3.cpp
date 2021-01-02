#include<iostream>
#include<math.h>
using namespace std;
bool prima(long long n){
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
	long long n=600851475143;
	int bagi=2;
	while(true){
		while(n%bagi==0){
			n/=bagi;
		}
		if(prima(n)){
			break;
		}
		bagi++;	
	}
	cout<<n;
	return 0;
}
