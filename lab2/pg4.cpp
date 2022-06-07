#include<bits/stdc++.h>
using namespace std ;
int fact(int n );
int main (){
    int c =10;
    cout << "The factorial of 10 is = "<<fact(c);
    return 0;
}
int fact(int n ){
    if(n ==1 )
        return 1;
    return n*fact(n-1);
}