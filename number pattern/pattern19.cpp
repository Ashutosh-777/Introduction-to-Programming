#include <iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int k=i-1;
         int column=1;
        while(column<=i-1){
            cout<<k;
            column++;
            k--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}