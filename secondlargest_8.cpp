#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==0){
        cout<<pow(-2,31);
    }
      for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            if(i==n-2){
            cout<<pow(-2,31);
            break;
            }else{
                continue;
            }
        }else{
            break;
        }
    }
    int g=a[0];
    int j=0;
    for(int i=0;i<n;i++){
        if(g<=a[i]){
            g=a[i];
            j=i;
        }
    }
    int g2=a[j-1];
    for(int i=0;i<n;i++){
        if(g2<=a[i]&&i!=j){
            g2=a[i];
            
        }
    }
    cout<<g2<<endl;
    return 0;
}