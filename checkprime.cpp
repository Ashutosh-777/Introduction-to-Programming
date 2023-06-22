#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int div=2;
    while(div<=n-1){
        if(n%div==0){
            cout<<"entered number is not a prime number"<<endl;
            break;
        }
        else{
            div++;
        }
    }
    if(div==n){
        cout<<"Entered number is prime "<<endl;
    }
    
    return 0;
}