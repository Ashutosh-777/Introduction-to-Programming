#include <iostream>
using namespace std;
int main () {
    int i=1,n;
    cin>>n;
          
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<' ';
            spaces++;
        }
        int column=1;
          int j=i;
        while(column<=i){
            cout<<j;
            column++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}