#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=i;
        int j=1;
        while(k<=(n+1)/2){
            int spaces=1;
            while(spaces<=(n+1)/2-k){
                cout<<' ';
                spaces++;
            }
            
            while(j<=2*k-1){
                cout<<'*';
                j++;
            }
            break;

        }
        int column=1;
        while(k>(n+1)/2&&k<=n){
            int spacing=1;
            while(spacing<=k-(n+1)/2){
                cout<<' ';
                spacing++;
            }
            
            while(column<=2*(n-k)+1){
                cout<<'*';
                column++;

            }
            break;
        }
        i++;
        cout<<endl;
    }
    return 0;
}