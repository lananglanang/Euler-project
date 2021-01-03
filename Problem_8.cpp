#include<iostream>
#include<string>
using namespace std;
long long calculate(string s){
	long long result=1;
	for(int i=0;i<13;i++){
		result*=(int(s[i])-48);
	}
	return result;
}

int main(){
	string s,a;
	int cnt=0;
	cout<<"Input the number\n";
	while(cin>>a){
		s+=a;
		cnt++;
		if(cnt==20){
			break;
		}
	}
	long long big=0;
	for(int i=0;i<s.length()-13;i++){
		long long ban=calculate(s.substr(i,13));
		if(ban>big){
			big=ban;
		}
	}
	cout<<big;
	
	return 0;
}
