//if user input is in between 0-100 find its 10% if 101-200 find its 20% and if 201-300 find its 30%
#include<iostream>
using namespace std;
int main(){
    int user;
    cin>>user;
    cout<<"user input is"<<user;
    if(user<=100 && user>=0){
        int op=user*0.1;
        cout<<"ans"<<op;


    }
    else if(user>=101 &&user<=200){
        int op = user*0.2;
        cout<<"ans"<<op;

    }
    else if(user>=201 && user<=300){
        int op = user*0.3;
        cout<<"ans"<<op;

    }
    else{
        cout<<"answer is not find";

    }
    return 0;


}