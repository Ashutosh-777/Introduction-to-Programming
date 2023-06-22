#include <iostream>
using namespace std;
bool fibonacci(int n){
    int f[n+1];
    f[0]=0;
    f[1]=f[2]=1;
   for(int i=3;i<=n;i++){
    f[i]=f[i-1]+f[i-2];
   } 
   for(int j=0;j<=n;j++){
    if(f[j]==n){
        return true;
    }
    if(j==n){
        return false;
    }
   }
}
int main(){
    int n;
    cin>>n;
    if(fibonacci(n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}