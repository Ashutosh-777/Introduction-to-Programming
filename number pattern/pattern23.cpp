#include <iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    while(i<=n){
        int spaces=1;
        int j=1;
           if(i<=(n+1)/2){
                while(spaces<=(n+1)/2-i){
                cout<<' ';
                spaces++;
                }
           }
           else{
               while(spaces<=i-(n+1)/2){
                cout<<' ';
                spaces++;
                }

           }
        if(i<=(n+1)/2){
            while(j<=2*i-1){
            cout<<'*';
            j++;
        }
        }
        else{
            while(j<=2*(n-i)+1){
                cout<<'*';
                j++;
            }
        }
       
        i++;
        cout<<endl;
    }
    return 0;
}