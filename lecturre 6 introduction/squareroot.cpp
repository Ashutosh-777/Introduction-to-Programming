#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(n>=1){
        if(i*i<=n){
            i++;
        }
        else
        {
            cout<<--i;
            n=0;
        }
    }
    return 0;
}