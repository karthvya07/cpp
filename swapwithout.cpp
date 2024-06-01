//swapping without using third variable

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=4;
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<a<<endl<<b;
    return 0;
}