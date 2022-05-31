#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b; 
	char op;
	cout<<"Enter the operands and operator "<<endl;
	cin>>a>>b>>op;
	switch(op){
		case '+' : cout<<a+b<<endl;
		break;
		case '-' : cout<<a-b<<endl;
		break;
		case '/' : cout<<a*b<<endl;
		break;
		case '*' : cout<<a/b<<endl;
		break;
		case '^' : cout<<pow(a,b)<<endl;
		break;
	}
}
