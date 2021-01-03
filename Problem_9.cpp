#include<iostream>
#include<math.h>
using namespace std;
bool cekSquare(long long n){
	if(ceil(sqrt(n))==floor(sqrt(n))){
		return true;
	}
	return false;
}

int main(){
	int c;
	bool flag=false;
	for(int a=3;a<500;a++){
		for(int b=a;b<500;b++){
			long long c2=a*a+b*b;
			if(cekSquare(c2)){
				c=sqrt(c2);
				if((a+b+c)==1000){
					cout<<a*b*c<<endl;
					flag=true;
					break;
				}
			}
			
		}
		if(flag){
			break;
		}
		
	}
	
	return 0;
}
