#include <iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<' ';
            spaces++;
        }
        int j=1;
        while(j<=2*i-1){
            cout<<'*';
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}