#include<bits/stdc++.h>
using namespace std;
class room {
	public:
	float  len, bd , ht;
	double area (){
		return len*bd;
	};
	double volume(){
		return len*bd*ht;
	};
	
};
int main (){
	room r1,r2,r3; // objects of class : room 
	r1.len = r1.bd = r1.ht = 5.00;
	r2.len = r2.bd = r2.ht = 3.00;
	r3.len = 5.00;
	r3.bd = 3.00;
	r3.ht = 6.00;
	cout<<"the area of r1 is = "<<r1.area()<<endl; 
	cout<<"the volume of r1 is = "<<r1.volume()<<endl; 
	cout<<"the area of r2 is = "<<r2.area()<<endl; 
	cout<<"the volume  of r2 is = "<<r2.volume()<<endl;
	cout<<"the area of r3 is = "<<r3.area()<<endl; 
	cout<<"the volume  of r3 is = "<<r3.volume ()<<endl; 
	return 0;
	
}
