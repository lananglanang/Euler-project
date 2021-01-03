#include<iostream>
#include<math.h>
using namespace std;
int countFak(int a, int b){
	int cnt=0;
	while(a%b==0){
		cnt++;
		a/=b;
	}
	return cnt;
}


int main(){
	int fakto[]={2,3,5,7,11,13,17,19};
	int cntFakto[8]={0};
	for(int i=20;i>1;i--){
		for(int j=0;j<8;j++){
			int ban=countFak(i,fakto[j]);
			if(ban>cntFakto[j]){
				cntFakto[j]=ban;
			}
		}
	}
	int s=1;
	for(int i=0;i<8;i++){
		s*=pow(fakto[i],cntFakto[i]);
	}
	
	cout<<s;
	return 0;
}
