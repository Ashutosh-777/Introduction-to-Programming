#include <iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    cin>>c;
    int sum=0;
    int product=1;
    int a=n;
    while(n>=0){
        sum= sum+(n--);
        
    }

    while(a>=1){
        product=product*a--;
       
    }
    if(c==1){
     cout<<sum<<endl;
     }
    else 
     if(c==2){
        cout<<product<<endl;
     }
     else
           cout<<"-1"<<endl;
    return 0;
}