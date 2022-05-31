#include<bits/stdc++.h>
using namespace std;
int main (){
	int *ptr1, *ptr2 , n;
	cout<<"Enter the size of the array to be alloted : "<<endl;
	cin>>n;
	ptr1 = (int *)malloc(n*sizeof(int ));
	ptr2 = (int *)calloc(n,sizeof(int ));
	if (ptr1 != NULL && ptr2 != NULL)
		cout <<"Memory allocated for both malloc and calloc pointers "<<endl;
	else 
		cout <<"Memory not allocated "<<endl;
	return 0;
}
