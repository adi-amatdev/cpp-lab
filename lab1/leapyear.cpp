#include<bits/stdc++.h>
using namespace std;

int main(){
	int year, leap;
	cout<<"Enter the year"<<endl;
	cin >> year;
	leap = year % 4;
	if (leap ==0)
		cout << "The entered year is a leap year "<<endl;
	else
		cout <<"The entered year is not a leap year"<<endl;
	return 0;
}
