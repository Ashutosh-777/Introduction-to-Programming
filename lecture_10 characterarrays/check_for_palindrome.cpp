#include <iostream>
using namespace std;
int main(){
    char c[100];
    cin>>c;
    int count=-1;
    bool m=false;
    for(int i=0;c[i]!='\0';i++){
        count++;
    }
    for(int i=0;i<count/2;i++){
        if(c[i]==c[count-i]) m=true;
        else {
            m=false;
            break;
        }
    }
    if(m){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


    
    return 0;
}