#include <iostream>
using namespace std;
void Merge_Sort(int a[],int b[],int c[],int x,int y){
    int i=0;
    int j=0;
    int k=0;
    while(i<x&&j<y){
        if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }else{
            c[k]=a[i];
            k++;
            i++;
        }
    }
    if(i==x){
        for(;j<y;j++){
            c[k]=b[j];
            k++;
        }
    }
    if(j==y){
        for(;i<x;i++){
            c[k]=a[i];
            k++;
        }
    }
}
void merge(vector<int> &arr,int low,int mid,int high){
    int right = mid+1;
    int left = low;
    int a[high+1];
    int i=0;
    while(left<=mid&&right<=high){
        if(arr[left]<arr[right]){
            a[i]=arr[left];
            left++;
        }else{
            a[i]=arr[right];
            right++;
        }
        i++;
    }
    while(left<=mid){
        a[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        a[i]=arr[right];
        right++;
        i++;
    }
    // int j = 0;
    // while(low<=high){
    //     arr[low]=a[j];
    //     j++;
    //     low++;
    // }
    //other way
    for(int i=low;i<=high;i++){
        arr[i]=a[i-low];
    }
}
void merge_Sort(vector < int > & arr,int low,int high){
    int mid = low + (high-low)/2;
    if(low==high){
        return;
    }
    merge_Sort(arr,low, mid);
    merge_Sort(arr, mid+1, high);
    merge(arr,low,mid,high);
}
int main(){
    int x,y;
    cin>>x>>y;
    int a[x],b[y],c[x+y];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0;i<y;i++){
        cin>>b[i];
    }
    Merge_Sort(a,b,c,x,y);
    for(int i=0;i<x+y;i++){
        cout<<c[i]<<' ';
    } 
    return 0;
}