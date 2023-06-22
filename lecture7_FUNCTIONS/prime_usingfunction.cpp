#include <iostream>
using namespace std;
bool isPrime(int n){
    int d=2;
    while(d<n){
        if(n%d==0){
            return false;
        }
        
            d++;
    }
    if(n==1) return false;
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"prime no."<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }

}