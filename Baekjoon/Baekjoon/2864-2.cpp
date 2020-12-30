/*
#include<iostream>
#include<string>
using namespace std;

int main(){
	string A,B;
	cin>>A>>B;
	for(int i=0;i<A.length();i++){
		if(A[i]=='6') A[i]='5';
	}
	for(int i=0;i<B.length();i++){
		if(B[i]=='6') B[i]='5';
	}
	int sum=0;
	sum=stoi(A)+stoi(B);
	cout<<sum<<' ';
	
	for(int i=0;i<A.length();i++){
		if(A[i]=='5') A[i]='6';
	}
	for(int i=0;i<B.length();i++){
		if(B[i]=='5') B[i]='6';
	}
	sum=stoi(A)+stoi(B);
	cout<<sum<<'\n';
}
*/