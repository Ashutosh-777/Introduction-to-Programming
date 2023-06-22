#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces;
        spaces=1;
        while(spaces<=n-i){
            cout<<' ';
            spaces++;
        }
        int j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
        int k=2;
        while(k<=i){
            cout<<k;
            k++;
        }
    
        cout<<endl;
        i++;

    }


    return 0;
}