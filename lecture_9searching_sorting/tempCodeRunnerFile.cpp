#include <bits/stdc++.h>
using namespace std;
void change(int a[],int n){
    for(int i =0 ;i<n;i++){
        a[i]= 2*a[i];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    change(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}