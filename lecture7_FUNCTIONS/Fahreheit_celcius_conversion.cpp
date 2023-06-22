#include <iostream>
using namespace std;
int conversion(int n){
    int c;
    c=5*(n-32)/9;
    return c;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(a;a<=b;a+=20){
        cout<<a<<' '<<conversion(a)<<endl;
    }

}