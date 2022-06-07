#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5];
	cout<<"Enter 5 variables : "<<endl;
	for(int i =0; i<5;i++)
		cin>>a[i];
	cout<<"the  5 variables are : "<<endl;
	for(int i =0; i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cout <<"The size of the array is  "<<sizeof(a)<<endl;
	cout <<"The length  of the array is  "<<sizeof(a)/sizeof(int )<<endl;
	return 0;
	
}
