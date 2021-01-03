#include<iostream>
using namespace std;
int main(){
	long long a=0,b=0;
	for(int i=1;i<=100;i++){
		a+=i*i;
		b+=i;
	}
	cout<<b*b-a;
	
	return 0;
}
