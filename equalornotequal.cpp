#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the nos."<<endl;
    cin>>a>>b;
    if(a==b){
        cout<<"they are equal";
    }else{
        if(a>b){
            cout<<"a is greater"<<endl;
        }else{
            cout<<"a is smaller"<<endl;
        }
    }

    return 0;
}