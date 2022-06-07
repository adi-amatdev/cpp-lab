#include<bits/stdc++.h>
using namespace std ;
int main (){
    int x =10;
    int &y =x;
    cout<<"The local var x = "<<x<<" and the reference var y ="<<y<< endl;
    return 0;
}