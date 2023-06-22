#include <bits/stdc++.h>
using namespace std;
int partition_index(int a[],int low,int high){
    int i =low;
    int j =high;
    int pivot =low;
    while(i<j){
        while(a[pivot]>=a[i]&&i<high){
            i++;
        }
        while(a[pivot]<a[j]&&j>low){
            j--;
        }
        if(j>i){
            swap(a[i],a[j]);
        }
    }
    swap(a[pivot],a[j]);
    return j;
}
void quick_sort(int a[],int low,int high){
    if(low==high){
        return;
    }
    if(low<high){
    int index = partition_index(a,low,high);
    quick_sort(a,low,index-1);
    quick_sort(a,index+1,high);
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}