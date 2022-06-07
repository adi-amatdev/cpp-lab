#include<iostream>
using namespace std;
struct maker{
	string usn;
	string name ;
	int semester;
	  
};
int main (){
	struct maker st[2];
	cout<<"Enter the details of 2 students st1 and st2"<<endl;
	for(int i=0;i<2;i++)
		cin>>st[i].usn>>st[i].name>>st[i].semester;
	cout<<"The student record display is "<<endl;
	for(int i=0;i<2;i++)
		cout<<st[i].usn<<"\t"<<st[i].name<<" \t"<<st[i].semester<< endl; //use double air bunnies  with \n or \t within said bunnies to give space
	return 0;
	
}
