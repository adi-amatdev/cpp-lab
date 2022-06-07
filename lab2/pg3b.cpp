#include<bits/stdc++.h>
using namespace std ;
void swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    
}
int main (){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"After swap a ="<< a<<" and b = "<<b; 
    return 0;
}