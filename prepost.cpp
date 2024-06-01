//pre and post operator 
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=4;
    int c;
    c= ++a + a++ + b++;
    cout<<c;
    return 0;
}