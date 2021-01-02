#include<iostream>
using namespace std;
int main(){
	int a=1;
	int b=2;
	int sum=0;
	while(a<4000000 && b<4000000){
		if(a%2==0 && a<4000000){
			sum+=a;
		}
		if(b%2==0 && b<4000000){
			sum+=b;
		}
		a+=b;
		b+=a;
	}
	cout<<sum;

	return 0;
}
