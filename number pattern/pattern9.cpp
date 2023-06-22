#include <iostream>
using namespace std;
int main(){
    int j=1;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int col=1;
        while(col<=i){
            cout<<j;
            j++;
            col++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}