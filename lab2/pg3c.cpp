#include<bits/stdc++.h>
using namespace std ;
int &func(int &x){
    return x;
}
int main (){
    int x =10;
    int &y = func(x);
    cout<<y<<endl;
    return 0;
}