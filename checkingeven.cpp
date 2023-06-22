#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number you want to check";
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"entered number is even";
    }else{
        cout<<"entered number is odd";
    }
    return 0;
}