#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        int column=1;
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
