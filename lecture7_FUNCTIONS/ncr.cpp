#include <iostream>
using namespace std;
int main(){
    double n,r;
    cin>>n>>r;
    double  ans=1;
    double x=r;
    for(double i=n;i>=n-x+1;i--){
        ans=(ans*i)/r;
        r--;
    }
    cout<<ans;
    return 0;
}