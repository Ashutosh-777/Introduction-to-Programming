#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int dec=0;
    int j=0;
    while(n>0){
        dec += (n%10)* pow(2,j);
        j++;
        n=n/10;
    }
    cout<<dec;
    return 0;
}