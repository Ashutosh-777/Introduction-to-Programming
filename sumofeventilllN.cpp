#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int seven=0;
    while(n>=0){
         if(n%2==0){
        seven=seven+n;
        n=n-1;
    }else{
        n=n-1;
    }
    }
    cout<<seven;
   
    return 0;
}