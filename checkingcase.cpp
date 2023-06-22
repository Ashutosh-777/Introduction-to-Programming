#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter the character"<<endl;
    cin>>c;
    int a=c;
    if(a>=65&&a<=90){
        cout<<1<<endl;
    }else
    if(a>=97&&a<=122)
    {
        cout<<0;
    }else cout<<-1;
    

    return 0;
}