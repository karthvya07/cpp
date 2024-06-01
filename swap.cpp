//swapping two no
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"value of a is"<<a<<endl<<"value of b is"<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"vlaue of a is"<<a<<endl<<"value of b is"<<b;
    return 0;
}