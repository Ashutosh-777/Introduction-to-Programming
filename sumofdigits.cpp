#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    int seven,sodd;
    seven=0;
    sodd=0;
    while(n>0){
    if((n%10)%2==0){
        seven=seven+(n%10);
        n=n/10;
    }
    else{
        sodd=sodd+(n%10);
        n=n/10;
    }
    }
    cout<<seven<<" "<<sodd;

    return 0;
}
