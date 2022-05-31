#include<bits/stdc++.h>
using namespace std;
int main(){
	for (;;){
		int x,y;//x and y are pos to access indices in matrix , not index
		char a[2][3]={{'a','b','c'},{'m','e','v'}};
		char b[20][20];
		cin>>x>>y;
		cout<<a[x-1][y-1]<<endl;
		cout<<"intialising using 2 for loops, enter size of matrix X x Y \n";
		cin>>x>>y;
		for(int i=0; i<x; i++)
			for(int j=0;j<y;j++)
				cin>>b[i][j];
		
		
	}
	return 0;
}
