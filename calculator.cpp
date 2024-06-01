//design calculator which calculat basic functions
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
    char c;
    cin>>c;
    cout<<c;

    switch(c){
        case 'A':
        cout<<a+b;
        break;
        case 'B':
        cout<<a-b;
        break;
        case 'C':
        cout<<a*b;
        break;
        case 'D':
        cout<<a/b;
        break;
        default:
        cout<<"sorry";

    }
    return 0;

}