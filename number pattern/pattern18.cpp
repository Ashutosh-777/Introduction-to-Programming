#include <iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    i=n;

    while(i>=1){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        i--;

        cout<<endl;
    }
    return 0;
}