#include<iostream>
using namespace std;
bool palin(int n){
	int ang1[6]={0};
	int ang2[6]={0};
	int a=0,b=5;
	while(n>=1){
		int p=n%10;
		ang1[a]=p;
		ang2[b]=p;
		a++;
		b--;
		n/=10;
	}
	for(int i=0;i<6;i++){
		if(ang1[i]!=ang2[i]){
			return false;
		}
	}
	return true;
}

int firstNum(int n){
	while(n>=10){
		n/=10;
	}
	return n;
}


int main(){
	int a[]={9,7,3};
	int b[]={1,7,3};
	for(int i=0;i<3;i++){
		int x=990+a[i],y=990+b[i];
		for(int j=x;j>=0;j-=10){
			if(i!=0){
				y=j;
			}
			for(int k=y;k>=0;k-=10){
				int ban=j*k;
				if(palin(ban)){
					cout<<ban<<endl;
				}
				if(firstNum(ban)!=9){
					break;
				}
			}
		}
	}
	
	return 0;
}
