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
        int k=1;
        j=j-2;
        while(k<=i-1){
            cout<<j;
            j--;
            k++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}