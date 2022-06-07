#include<iostream>
using namespace std;

void add (int a , int b){
	cout <<a+b<< endl;
}
void add (int a , int b , int c ){
	cout <<a+b+c<< endl;
}
void add (int a , int b , int c, int d){
	cout <<a+b+c+d<< endl;
}
void add (int a , int b , int c , int d , int e){
	cout <<a+b+c+d+e<< endl;
}

int main (){
	add(2,3);
	add(34,54,32);
	add(51,5,12,5);
	add(12,15,32,48,21);
	return 0;
}
