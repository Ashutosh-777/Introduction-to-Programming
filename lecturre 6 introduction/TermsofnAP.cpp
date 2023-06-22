#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int i=1;

    while(x>0){
     int p=3*i+2;
     if(p%4==0){
        ;
     }
     else 
        {cout<<p<<' ';
        x--;
        }
    i++;
    }
    return 0;
}