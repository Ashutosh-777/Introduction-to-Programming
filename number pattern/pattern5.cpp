#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
       int val=1;
       int count=1;
        while(count<=n-i){
                cout<<" ";
                count++;
            }
        while(val<=2*i-1){
            
           
            cout<<"*";
            val++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}