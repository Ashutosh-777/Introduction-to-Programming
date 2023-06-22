#include <iostream>
using namespace std;
int main(){
    int s,e,w;
    cin>>s>>e>>w;
    int c=0;
    while(s<=e){
    c=(s-32)*5/9;
    cout<<s<<"  "<<c<<endl;
    s=s+w;
    }
    
    return 0;
}