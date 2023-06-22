#include <iostream>
using namespace std;
int main(){
    char c[100];
    cin>>c;
    char d,e;
    cin>>d>>e;
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]==d){
            c[i]=e;
        }
    }
    cout<<c;
    
    return 0;
}