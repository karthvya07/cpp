//cost price and selling price calculate profit and loss
#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cin>>cp>>sp;
    cout<<"cp"<<cp<<endl<<"sp"<<sp<<endl;
    if(cp<sp){
        int profit= sp-cp;
        cout<<"profit"<<profit<<endl;

    }
    else{
        int loss=cp-sp;
        cout<<"loss"<<loss<<endl;

    }

    return 0;


}
