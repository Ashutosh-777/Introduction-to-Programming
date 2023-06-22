#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
     int d=1;
    while(i<=n){
       int val=1;
        while(val<=i){
            cout<<d;
            d++;
            val++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}