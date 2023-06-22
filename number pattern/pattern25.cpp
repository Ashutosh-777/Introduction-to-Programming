#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
            while(j<=n+1-i){
                cout<<j;
                j++;
            }
            int stars=1;
            while(stars<=i-1){
                cout<<'*';
                stars++;
            }
            int stars1 =1;
            while(stars1<=i-1){
                cout<<'*';
                stars1++;
            }
            int k=n-i+1;
            
            while(k>=1){
                cout<<k;
                k--;
            }
        cout<<endl;
        i++;
    }
    return 0;
}