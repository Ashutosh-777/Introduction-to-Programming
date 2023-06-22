#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int d=1;
        while(d<=i){
            cout<<d;
            d++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}