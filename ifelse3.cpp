///find maximum no
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"a is"<<a<<endl<<"b is"<<b<<endl<<"c is"<<c<<endl;
    if(a>b){
        if(a>c){
            cout<<"a is greater "<<endl;

        }
    }
    else if(b>a){
        if(b>c){
            cout<<"b is greater"<<endl;

        }
    }
    else if(c>a && c>b) {
        cout<<"c is greater";

    }
    return 0;
}