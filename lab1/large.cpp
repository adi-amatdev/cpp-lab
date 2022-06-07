#include<bits/stdc++.h>

//this program finds largest of 3 numbers 

using namespace std;
int main (){
	int a,b,c;
	cout<<"Enter 3 numbers "<<endl;
	cin>>a>>b>>c;
	if (a>b && a>c)
		cout<<a<<" is the greatest number of the three"<<endl;	
	else if (b>a && b>c)
		cout<<b<<" is the greatest number of the three"<<endl;
	else
		cout<<c<<" is the greatest number of the three"<<endl;
	return 0;
}
