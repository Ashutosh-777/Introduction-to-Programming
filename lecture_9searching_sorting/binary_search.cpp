#include <iostream>
using namespace std;
int  Binary_search(int a[],int x,int n){
        int start,middle,end;
        start=0;
        end=n-1;
        while(end>=start){
            middle = start + (end-start)/2;
            if(a[middle]==x){
             return middle;
            }
            if(a[middle]<x){
             start=middle+1;
             continue;
            }else{
             end=middle-1;
             continue;
            }
        } 
        return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
     cin>>x;
     cout<<Binary_search(a,x,n)<<endl;
    } 
    
    return 0;
}